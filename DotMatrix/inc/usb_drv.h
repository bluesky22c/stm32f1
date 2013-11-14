/******************** (C) COPYRIGHT 2008 Osung LST *****************************
* File Name          : usb_drv.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : usb device driver
********************************************************************************
* 
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USB_DRV_H
#define __USB_DRV_H


/* Includes ------------------------------------------------------------------*/
#include "usb_type.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
void      UsbClk_Configruation(void);
void      Enter_LowPowerMode(void);
void      Leave_LowPowerMode(void);
void      USB_Cable_Config (FunctionalState NewState);
void      Get_SerialNum(void);

u8        JoyState(void);
void      Joystick_Send(u8 Keys);


/* External variables --------------------------------------------------------*/

#endif  /*__USB_DRV_H */

