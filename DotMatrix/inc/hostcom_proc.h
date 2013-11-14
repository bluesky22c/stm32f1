/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : hostcom_proc.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : hostcom procedure which is performing to parse command from host PC. 

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HOSTCOM_PROC_H
#define __HOSTCOM_PROC_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/
#define HOSTCOM_DEBUG


typedef void (*HostCmdHandler)(u8*, u32);


typedef struct
{
  u8               cmd;
  HostCmdHandler   fun;
}host_cmd_handler_t;

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
#define HOSTCOM_MAX_Q_SIZE              2
#define HOSTGPS_MAX_Q_SIZE              20


/* External variables --------------------------------------------------------*/
void      HostComProc_MsgQInit(void);
void      HostComProc_QPut(u8* str);
void      HostComProc_ParsePkt(u8* str);
void      HostComProc(void);

void      HostGPSProc_MsgQInit(void);
void      HostGPSProc_QPut(u8* str);
void      HostGPSProc_ParsePkt(u8* str);
void      HostGPSProc(void);

#endif  /*__HOSTCOM_PROC_H */

