/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : hostif.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : parsing raw data from usart and handover it to hostcom procedure.
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HOSTIF_H
#define __HOSTIF_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"
#include "hostcom_type.h"

/* Exported define -----------------------------------------------------------*/
/* USB : 0 /UART : 1 */
#define HOST_INTERFACE_TYPE       0
#define MAX_HOST_INTERFACE        1

#define PACKET_MAX_LEN            1700


/* Exported types ------------------------------------------------------------*/
typedef void (*HostPutChar)(u8);
typedef void (*HostPutNChars)(u8*, u32);

typedef struct
{
  HostPutChar			  PutChar;
  HostPutNChars 		  PutNChars;
}host_if_fun_t;

/* Exported constants --------------------------------------------------------*/
	
/* Exported macro ------------------------------------------------------------*/
void      HostIf_Init(void);
bool      ChkFCS(u8* str, u32 len, u8* chksum  );
void      UartBuild_Msg(u8 rch );
void      UartBuild_GPS(u8 rch );

void      SendToHost(u8* str, u32 len );


/* External variables --------------------------------------------------------*/

#endif  /*__HOSTIF_H */

