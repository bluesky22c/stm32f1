/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : hostcom_type.h
* Author             : Osung LST Co.,LTD
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : the protocol structure of host command.

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HOSTCOM_TYPE_H
#define __HOSTCOM_TYPE_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
#define __PACKED__                        __attribute__ ((packed))




#define STX                               0x02   /* the header of packet */
#define ETX                               0x03   /* the tail  of packet */

#define MAX_PATTERN_CNT	                  30

/* Exported types ------------------------------------------------------------*/

/* External variables --------------------------------------------------------*/

#endif  /*__HOSTCOM_TYPE_H */

