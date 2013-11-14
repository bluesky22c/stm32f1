/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : key_proc.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : key processing procedure transfering key value to Host PC

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __KEY_PROC_H
#define __KEY_PROC_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"


/* Exported define -----------------------------------------------------------*/
#define KEY_MAX_Q_SIZE              20


/* Exported types ------------------------------------------------------------*/
typedef enum
{
  KEY_CMD_INIT            = 1,
  KEY_CMD_IR_INPUT,

  KEY_CMD_MAX
}key_con_cmd_t;


typedef struct
{
  u8                    cmd;
  u8                    key_modifier;
  u8                    key_val;
  
}key_msg_t;


typedef union 
{
  u8                    cmd;
  key_msg_t             key_msg;

}key_proc_req_t;


typedef void (*KeyCmdHandler)(u8*, u32);


typedef struct
{
  u8               cmd;
  KeyCmdHandler    fun;
}key_cmd_handler_t;



/* Exported constants --------------------------------------------------------*/
	
/* Exported macro ------------------------------------------------------------*/



/* External variables --------------------------------------------------------*/
void      KeyProc_MsgQInit(void);
void      KeyProc_QPut(u8* str);
void      KeyProc_ParsePkt(u8* str);

void      KeyProc(void);

#endif  /*__KEY_PROC_H */

