//
// Created by wzb on 22-6-26.
//

#ifndef wzb_OSKERNEL_TEACH_KERNEL_H
#define wzb_OSKERNEL_TEACH_KERNEL_H

#include "../stdarg.h"

int vsprintf(char *buf, const char *fmt, va_list args);

int printk(const char * fmt, ...);

#endif //wzb_OSKERNEL_TEACH_KERNEL_H
