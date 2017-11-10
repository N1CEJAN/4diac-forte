/*******************************************************************************
 * Copyright (c) 2010 - 2013, 2017 ACIN, Profactor GmbH, fortiss GmbH
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *  Alois Zoitl, Gerhard Ebenhofer, Martin Melik-Merkumians - initial API and implementation and/or initial documentation
 *******************************************************************************/
#ifndef _FORTE_SYNC_H_
#define _FORTE_SYNC_H_

#define WIN32_LEAN_AND_MEAN
 #include <windows.h>

#define CSyncObject CPCSyncObject //allows that doxygen can generate better documenation


/*! \ingroup win32_hal
 * \brief The sync object implementation for the win32 thread interface.
 *
 * In the win32 version a CRITICAL_SECTION is used for the sync object.
 * 
 */
 
class CPCSyncObject{
  public:
    CPCSyncObject();
    ~CPCSyncObject();

    /*!\brief Lock the resource coming after the lock command
     *
     * This function blocks until it will get the lock for the coming critical section.
     */
    void lock(void){
      AcquireSRWLockExclusive(&mLock);
    }

    //!Free the resource coming after the lock command
    void unlock(void){
      ReleaseSRWLockExclusive(&mLock);
    }

  private:
    SRWLOCK mLock;
};

#endif /*FORTE_SYNC_H_*/
