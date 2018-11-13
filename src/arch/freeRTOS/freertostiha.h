/*******************************************************************************
 * Copyright (c) 2016 fortiss GmbH
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 * Milan Vathoopan, Guru Chandrasekhara - initial API and implementation and/or initial documentation
 *******************************************************************************/

#ifndef SRC_ARCH_FREERTOS_FREERTOSTIHA_H_
#define SRC_ARCH_FREERTOS_FREERTOSTIHA_H_

#include "../timerha.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <FreeRTOS_Source/include/FreeRTOS.h>
#include <FreeRTOS_Source/include/timers.h>

/*! \brief External event handler for the FreeRTOS Timer.
 * \ingroup FreeRTOS-HAL
 *
 */
class CFreeRTOSTimerHandler : public CTimerHandler{
public:
  virtual ~CFreeRTOSTimerHandler();

  /*!\brief Enables this event source
   *
   */
  virtual void enableHandler(void);
  /*!\brief Disable this event source
   */
  virtual void disableHandler(void);
  /*!\brief Sets the priority of the event source
   *
   * \param pa_nPriority new priority of the event source
   */
  virtual void setPriority(int paPriority);
  /*!\brief Get the current priority of the event source
   *
   * \return current priority
   */
  virtual int getPriority(void) const;

private:

  explicit CFreeRTOSTimerHandler(CDeviceExecution& paDeviceExecution);

  static void vCallbackFunction(TimerHandle_t paTimer);

  TimerHandle_t mTimer;

  friend class CTimerHandler;
};

#ifdef __cplusplus
}
#endif

#endif /* SRC_ARCH_FREERTOS_FREERTOSTIHA_H_ */