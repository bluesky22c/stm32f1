
#include "platform_config.h"
#include "usart.h"


void sh_putchar(char ch)
{
  SerialPutChar(USART1,ch);
}

void sh_print(char* str)
{
  SerialPutString(USART1,str);
}

int print_prompt()
{
  sh_print("Osung>");
  return 0;
}

