/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : usart.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : usart driver

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USART_H
#define __USART_H

/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"


/* Exported constants --------------------------------------------------------*/
#define DEBUG_PORT           1
#define HOST_PORT            1


/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void      SerialPutChar(USART_TypeDef* USARTx, u8 c);
void      SerialPutString(USART_TypeDef* USARTx,u8 *s);

void      DebugPutChar(u8 c);


void      UartHostPutChar(u8 c);
void      UartHostPutNChars(u8 *s, u32 len);

#endif  /* __USART_H */

