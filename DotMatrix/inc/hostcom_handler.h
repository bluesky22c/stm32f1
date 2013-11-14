/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : hostcom_handler.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : hostcom cmd handler.

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HOSTCOM_HANDLER_H
#define __HOSTCOM_HANDLER_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/


/* External variables --------------------------------------------------------*/

#endif  /*__HOSTCOM_HANDLER_H */


void HostRecv_GPS(u8* buf);

void HostRecv_48Team4(u8* buf);
void HostRecv_48Team4_2012(u8* buf);
void HostRecv_46Char20(u8* buf);
void HostRecv_266Banner(u8* buf);
void HostRecv_TestMode(u8* buf);
void HostRecv_106Volleyball(u8* buf);
