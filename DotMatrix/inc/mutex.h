/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : mutex.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : mutex driver

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MUTEX_H
#define __MUTEX_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/


	
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/


/* External variables --------------------------------------------------------*/


void Mutex_Lock(void);
void Mutex_UnLock(void);


#endif  /*__MUTEX_H */

