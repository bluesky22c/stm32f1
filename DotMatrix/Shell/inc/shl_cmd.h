
#ifndef _SHL_CMD_H_
#define _SHL_CMD_H_

#include "platform_config.h"

#define SHL_MAX_CMD       12

typedef void (*ShlCmd)(int ac);

typedef struct
{
  u8         *cmd;
  u8         *dsc;
  ShlCmd     p_fun;
}shl_cmd_handler_t;



int      shl_cmd(int ac );


#endif /* _SHL_CMD_H_ */
                                                                                                                                  
