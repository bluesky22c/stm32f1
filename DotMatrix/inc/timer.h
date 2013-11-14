/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : timer_app.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : timer application driver

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TIMER_H
#define __TIMER_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/
typedef enum
{
  TIMER_TYPE_ONESHOT  = 0,
  TIMER_TYPE_PERIODIC = 1
}timer_type_t;

typedef struct timer_ele_msg
{
  struct timer_ele_msg*   pPreviousListElement;  //pointer to previous item in the queue
  struct timer_ele_msg*   pNextListElement;     //pointer to next item in the queue

  u32                     DataElement;          //message contents 
  u32                     nCont;                //Timer value per 1ms
  u32                     nBackCont;            //total timer value
  u32                     Timer_ID;             //key to find the message contents 
  timer_type_t            Timer_type;           //periodic or one shot 

}timer_ele_msg_t;

typedef struct
{
  
  timer_ele_msg_t*    pHead;
  timer_ele_msg_t*    pTail;
  int                 iCount;
  int                 iSort;

}timer_msg_type_t;


typedef void (*T_CallBackFunc)(void*);

/* Exported constants --------------------------------------------------------*/


	
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
void               TimerApp_Init(timer_msg_type_t* pMap, int sort);
void               TimerApp_AddElement(timer_msg_type_t* pMap,int pData,int iValue, \
                                       int pKey, timer_type_t type);

int                TimerApp_RemoveElement(timer_msg_type_t* pMap,int pKey);
int                TimerApp_Empty(timer_msg_type_t* pMap);
int                TimerApp_GetLength(timer_msg_type_t* pMap);

void               TimerTickISR(timer_msg_type_t* pTimer);




/* External variables --------------------------------------------------------*/


#endif  /*__TIMER_H */

