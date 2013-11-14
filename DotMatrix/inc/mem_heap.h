/******************** (C) COPYRIGHT 2008 Osung LST *********************************
* File Name          : mem_heap.h
* Author             : Advanced Research Team
* Version            : V2.2.1
* Date               : 09/22/2008
* Description        : heap memory driver

*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MEM_HEAP_H
#define __MEM_HEAP_H


/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"


/* Exported define -----------------------------------------------------------*/
#define MAX_SYS_HEAP_SIZE       0x8000 /* 32K byte */
#define MAX_HEAPNAME_SIZE       20


/* Exported types ------------------------------------------------------------*/
typedef struct  
{
  unsigned long              forw_offset;
  char                       free_flag;
  char                       last_flag;
  unsigned char              extra;
  unsigned char              pad1;
} mem_block_header_type;

typedef struct  
{
  mem_block_header_type      *first_block;
  mem_block_header_type      *next_block;
  unsigned long              total_blocks;
  unsigned long              total_bytes;
  unsigned long              used_bytes;
  unsigned long              max_used;
  unsigned long              max_request;
 
  unsigned char*             pHeapMem;
  unsigned int               nHeapSize;
  char                       heap_name[MAX_HEAPNAME_SIZE];

}mem_heap_type;

typedef struct  
{
  mem_block_header_type     *mBlock;
}mem_heap_block_iterator_type;

typedef struct  
{
  unsigned long             total_physical_bytes;
  unsigned long             current_block_count;
  unsigned long             used_blocks;
  unsigned long             header_bytes;
  unsigned long             used_bytes;
  unsigned long             free_bytes;
  unsigned long             wasted_bytes;
  unsigned long             largest_free_block;
  unsigned long             max_logical_used;
  unsigned long             max_logical_request;
}mem_heap_totals_type;

enum 
{
  kBlockFree    = -1,
  kBlockUsed    = 0,
  kLastBlock    = -1,
  kMinChunkSize = 16
};
/* Exported constants --------------------------------------------------------*/


        
/* Exported macro ------------------------------------------------------------*/



/* External variables --------------------------------------------------------*/
void             MemHeap_Create(mem_heap_type* pHeap, char* pHeapPool,int nHeapSize, char* Name);
void             GetTotals(mem_heap_type* pHeap,mem_heap_totals_type *totals);
void             GetFreeblockInfo(mem_heap_type* pHeap,unsigned int num_blocks, unsigned int* buf);
unsigned int     GetChunkSize();

size_t           GetHeapSize(mem_heap_type* pHeap);
size_t           GetUsed(mem_heap_type* pHeap);
size_t           GetOverhead();
size_t           GetConsumed(mem_heap_type* pHeap);
void*            Malloc(mem_heap_type* pHeap, size_t size);
void             Free(mem_heap_type* pHeap, void* ptr);

void             MemHeap_PrintStatus(mem_heap_type* pHeap);


#endif  /*__MEM_HEAP_H */

