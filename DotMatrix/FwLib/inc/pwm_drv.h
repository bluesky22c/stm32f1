/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : pwm_drv.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : pwm driver 

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PWM_DRV_H
#define __PWM_DRV_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
	
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
void      PWM_Tim3_Configuration(u32 freq );
void      PWM_Tim3_Enable(bool onoff );
void      PWM3_SetControlFreq(u16 freq);
void      PWM3_Duty_Control( u16 duty );

void      PWM_Tim4_Configuration(u32 freq );
void      PWM_Tim4_Enable(bool onoff );
void      PWM4_SetControlFreq(u16 freq);
void      PWM4_Duty_Control( u16 duty );

/* External variables --------------------------------------------------------*/

#endif  /*__PWM_DRV_H */

