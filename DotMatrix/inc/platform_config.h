/******************** (C) COPYRIGHT 2008 Osung LST *****************************
* File Name          : platform_config.h
* Author             : MCD Application Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : 
********************************************************************************
*
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PLATFORM_CONFIG_H
#define __PLATFORM_CONFIG_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_type.h"
#include "stm32f10x_lib.h"

#define USE_STM3210E_EVAL

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Uncomment the line corresponding to the STMicroelectronics evaluation board
   used to run the example */
#if !defined (USE_STM3210B_EVAL) &&  !defined (USE_STM3210E_EVAL)
 #define USE_STM3210E_EVAL
#endif

/* Define the STM32F10x hardware depending on the used evaluation board */
#ifdef USE_STM3210B_EVAL
  #define USB_DISCONNECT                   GPIOA	
  #define USB_DISCONNECT_PIN               GPIO_Pin_8

  #define RCC_APB2Periph_GPIO_DISCONNECT   RCC_APB2Periph_GPIOA

  #define PAGE_SIZE                        (0x400)
  #define FLASH_SIZE                       (0x20000) /* 128K */


#else /* USE_STM3210E_EVAL */

  #define USB_DISCONNECT                   GPIOB  
  #define USB_DISCONNECT_PIN               GPIO_Pin_14
  #define RCC_APB2Periph_GPIO_DISCONNECT   RCC_APB2Periph_GPIOB

  #define PAGE_SIZE                        (0x800) /* 2K */
  #define FLASH_SIZE                       (0x80000) /* 512K */

#define FLASH_TEXT_S				       (0x807f800)
#define FLASH_TEXT_E					   (0x807fBff)
#define FLASH_COLR_S		  		       (0x807fC00)
#define FLASH_COLR_E					   (0x807ffff)
  
#endif /* USE_STM3210B_EVAL */

/* Exported macro ------------------------------------------------------------*/

#define USE_USART1
#define USE_USART2
//#define USE_USART3
#define USE_UART4
#define USE_UART5

//#define USE_USB

//#define USE_I2C_CH1
//#define USE_I2C_CH2

#define USE_TIM2
//#define USE_TIM3
#define USE_TIM4   // PWM

//#define USE_ADC

//#define USE_SHELL

//#define USE_RTC

#define USE_IWDG



/********************************/
/*         DUTY                                    */
/********************************/
//#define DUTY_STATIC
//#define DUTY_4
#define DUTY_8
//#define DUTY_16

//#define ROWCOL_1_8   // col ÀÌ 8 Ä­ÀÎ »ç¿ë¸ðµ¨  -> Matrix_proc.h ¿¡ Á¤ÀÇµÊ


/* Exported functions ------------------------------------------------------- */

#endif /* __PLATFORM_CONFIG_H */

