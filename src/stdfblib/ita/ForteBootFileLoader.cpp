/*******************************************************************************
 * Copyright (c) 2017 fortiss GmbH
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Monika Wenger
 *    - initial API and implementation and/or initial documentation
 *******************************************************************************/

#include "ForteBootFileLoader.h"
#include <devlog.h>
#include <mgmcmd.h>
#include <mgmcmdstruct.h>
#include "../../core/device.h"

ForteBootFileLoader::ForteBootFileLoader(DEV_MGR &paDevMgr) : paDevMgr(paDevMgr){
  setBootFileName();
  if(checkBootFile()){
    openBootFile();
  }
}

ForteBootFileLoader::~ForteBootFileLoader() {
}

void ForteBootFileLoader::setBootFileName(){
  // select provided or default boot file name
  char * envBootFileName = getenv("FORTE_BOOT_FILE");
  if(0 != envBootFileName){
    DEVLOG_INFO("Using provided bootfile location: %s\n", envBootFileName);
    bootFileName = envBootFileName;
  }
  else{
    DEVLOG_INFO("Using default bootfile location: %s\n", FORTE_BOOT_FILE_LOCATION);
    bootFileName = FORTE_BOOT_FILE_LOCATION;
  }
}

bool ForteBootFileLoader::checkBootFile(){
  // check if we finally have a boot file name
  if(0 == bootFileName){
    DEVLOG_INFO("No bootfile specified and no default bootfile configured during build\n");
    return false;
  }
  // check if bootfile name is empty
  if(bootFileName[0]==0){
    DEVLOG_DEBUG("Empty bootfile location\n");
    return false;
  }
  return true;
}

void ForteBootFileLoader::openBootFile(){
  bootfile = fopen(bootFileName, "r");
  if(0 != bootfile){
    loadBootFile();
  }
  else{
    if(0!=getenv("FORTE_BOOT_FILE_FAIL_MISSING")){
      DEVLOG_ERROR("Boot file %s could not be opened and FORTE_BOOT_FILE_FAIL_MISSING is set. Failing...\n", bootFileName);
      exit(2);
    }
    else{
      DEVLOG_WARNING("Boot file %s could not be opened. Skipping...\n", bootFileName);
    }
  }
}

void ForteBootFileLoader::loadBootFile(){
  DEVLOG_INFO("Boot file %s opened\n", bootFileName);
  //we could open the file try to load it
  int nLineCount = 1;
  EMGMResponse eResp;
  char acLineBuf[cg_unBootFileLineBufSize]; //TODO maybe move it out of the stack

  while(0 != fgets(acLineBuf, cg_unBootFileLineBufSize, bootfile)){
    if('\n' != acLineBuf[strlen(acLineBuf) - 1]){
       //the line has been longer than our buffer
      DEVLOG_ERROR("Boot file line longer than configured buffer size: %d\n", cg_unBootFileLineBufSize);
      //As we were not able to load the bootfile clean any created resources and FBs and start an empty device
      forte::core::SManagementCMD m_stCommand;
      m_stCommand.mCMD = cg_nMGM_CMD_Delete_AllFBInstances;
      m_stCommand.mDestination = CStringDictionary::scm_nInvalidStringId;
      paDevMgr.getResource().getDevice().executeMGMCommand(m_stCommand);
      break;
    }
    char *cmdStart = strchr(acLineBuf, ';');
    if(0 == cmdStart){
      DEVLOG_ERROR("Boot file line does not contain separating ';'. Line: %d\n", nLineCount);
      break;
    }
    *cmdStart = '\0';
    cmdStart++;

    eResp = paDevMgr.parseAndExecuteMGMCommand(acLineBuf, cmdStart);
    if(e_RDY != eResp){
      //command was not successful
      DEVLOG_ERROR("Boot file command could not be executed. Line: %d: %s, Response %s\n", nLineCount, cmdStart, DEV_MGR::scm_sMGMResponseTexts[eResp]);
      break;
    }
    nLineCount++;
  }

  fclose(bootfile);
}
