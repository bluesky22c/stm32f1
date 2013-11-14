/******************** (C) COPYRIGHT 2008 STMicroelectronics ********************
* File Name          : remocon.h
* Author             :  Advanced Research Team
* Version            : V2.2.1
* Date               : 01/11/2010
* Description        : Hardware Configuration & Setup
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __REMOCON_H
#define __REMOCON_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/


/* Exported functions ------------------------------------------------------- */
void      IRemoCon_ISR();
void      SendKey(u8 key);


/* External variables --------------------------------------------------------*/

#endif  /*__REMOCON_H */

