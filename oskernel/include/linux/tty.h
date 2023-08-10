//
// Created by wzb on 22-6-26.
//

#ifndef wzb_OSKERNEL_TEACH_TTY_H
#define wzb_OSKERNEL_TEACH_TTY_H

#include "types.h"

void console_init(void);
void console_write(char *buf, u32 count);

#endif //wzb_OSKERNEL_TEACH_TTY_H
