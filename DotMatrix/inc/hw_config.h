/******************** (C) COPYRIGHT 2008 STMicroelectronics ********************
* File Name          : hw_config.h
* Author             : MCD Application Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : Hardware Configuration & Setup
********************************************************************************
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HW_CONFIG_H
#define __HW_CONFIG_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
#define PLL_CLOCK             72000000L

#define MASS_MEMORY_START     0x04002000
#define BULK_MAX_PACKET_SIZE  0x00000040
#define LED_ON                0xF0
#define LED_OFF               0xFF

#define UART1_BAUDRATE        57600
#define UART2_BAUDRATE        9600
#define UART3_BAUDRATE        57600
#define UART4_BAUDRATE        57600
#define UART5_BAUDRATE        9600

#define DOWN                  1
#define LEFT                  2
#define RIGHT                 3
#define UP                    4
#define CURSOR_STEP           30

/* Exported functions ------------------------------------------------------- */
void      Hw_Initialize(void);

void      Hw_WatchDogEnable();
void      Hw_KickWatchDog();
void      Usart_Configuration(void);
void      Rcc_Configuration(void);
void      Nvic_Configuration(void);
void      Gpio_Configuration(void);
void      SysTick_Configuration(void);

void      Tim4_Configuration(u32 freq );

#endif  /*__HW_CONFIG_H*/

