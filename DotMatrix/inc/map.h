/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : map.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : MAP driver

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAP_H
#define __MAP_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/
typedef struct map_ele_msg
{
  struct map_ele_msg*   pPreviousListElement;  //pointer to previous item in the queue
  struct map_ele_msg*   pNextListElement;     //pointer to next item in the queue

  int                   DataElement;          //message contents 
  int                   KeyElement;           //key to find the message contents 

}map_ele_msg_t;

typedef struct
{
  
  map_ele_msg_t*    pHead;
  map_ele_msg_t*    pTail;
  int               iCount;
  int               iSort;

}map_msg_type_t;



/* Exported constants --------------------------------------------------------*/


	
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/

void    Map_Init(map_msg_type_t* pMap, int sort);
int     Map_RemoveElement(map_msg_type_t* pMap,int pKey);
int     Map_RemoveData(map_msg_type_t* pMap,int pData);
void    Map_AddElement(map_msg_type_t* pMap,int pData,int pKey);
int     Map_LookAtFirstElement(map_msg_type_t* pMap, int* Reference);
int     Map_LookAtNextElement(map_msg_type_t* pMap, int* Reference);
int     Map_Empty(map_msg_type_t* pMap);
int     Map_GetLength(map_msg_type_t* pMap);

/* External variables --------------------------------------------------------*/


#endif  /*__MAP_H */

