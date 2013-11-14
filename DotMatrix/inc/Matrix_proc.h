/******************** (C) COPYRIGHT 2011 OP ***********************************
* File Name          : Matrix_proc.c
* Author             : Advanced Research Team
* Version            : V1.1.1
* Date               : 11/11/2011
******************************************************************************/
	/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"
#include "stm32f10x_type.h"

/********************************/
/*        ROW,COLULM                         */
/********************************/
//#define ROWCOL_1_8   // remocon »ç¿ë¸ðµ¨ 

/********************************/
#define DOT_MAX_MOD 16
#define DOT_MAX_X  DOT_MAX_MOD*16 
#define DOT_MAX_Y  16 

typedef struct  
{
	u8 inType;  // (0~6)  0:none 1:from right 2:from left 3:from top 4:from bottom 5:from left and right 6:from top and bottom 
	u8 delay;   // (0~10)
	u8 outType; // (0~6)  0:none 1:to right 2:to left 3:to top 4:to bottom 5:to left and right 6:to top and bottom 
	u8 speed;   // (0~9)
	int delaycnt;
	int timecnt;
}__PACKED__ DotEffect_t;

//----------------------------------
//  Function
bool LoadFromFlash(u8 aryTxtIdx, u8* txt, u8* clr);
bool SaveToFlash(u8 aryTxtIdx);

void MatrixConvKssm(u8* text, int len);
void MatrixProc_Init(void);
void MatrixSetFrame(u8 m, u8* text, u8* colr, int len);
void MatrixDisplayPort(u8 port);
void MatrixSetEffect(u8 m);

