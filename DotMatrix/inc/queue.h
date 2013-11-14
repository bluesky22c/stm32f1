/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : queue.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : queue driver

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __QUEUE_H
#define __QUEUE_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"


/* Exported constants --------------------------------------------------------*/


	
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
#define QUEUE_NAME_SIZE     20

/* External variables --------------------------------------------------------*/
typedef struct
{
  int*          Queue;
  int           pHeadQ;
  int           MemoryPoolSize;
  int           ulCount;
  char          name[QUEUE_NAME_SIZE];
}queue_type_t;


/* Exported types ------------------------------------------------------------*/
void   Q_Init(queue_type_t* queue,char* name, int size);
int    Q_IsEmpty(queue_type_t* queue);
int    Q_GetLength(queue_type_t* queue);

int    Q_GetElement(queue_type_t* queue);
bool   Q_PutElement(queue_type_t* queue,int Content);
int    Q_LookAtHeadElement(queue_type_t* queue, int Reference);
void   Q_RemoveElement(queue_type_t* queue, int Content);



#endif  /*__QUEUE_H */

