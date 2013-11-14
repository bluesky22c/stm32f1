/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : sys_info.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : system information data type define. 

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SYS_INFO_H
#define __SYS_INFO_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"
#include "hostcom_type.h"

/* Exported types ------------------------------------------------------------*/



typedef struct
{
  u8                name[16];
  u8                board_num[2];
  u8                ver[2];
  u8                date[30];
  u8                time[30];

}system_info_t;



/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/


/* External variables --------------------------------------------------------*/

#endif  /*__SYS_INFO_H */

