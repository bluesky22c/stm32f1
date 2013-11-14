/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : pwr.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : setting the value of VDD,VBL,IDD,IBL 

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PWR_H
#define __PWR_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"
#include "gpio.h"

/* Exported define -----------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
	
/* Exported macro ------------------------------------------------------------*/
void       P_DIMM_Control(u16 freq, u16 duty, u8 channel);

/* External variables --------------------------------------------------------*/

#endif  /*__PWR_H */

