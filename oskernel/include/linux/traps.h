//
// Created by wzb on 22-7-5.
//

#ifndef wzb_OSKERNEL_RESEARCH_TRAPS_H
#define wzb_OSKERNEL_RESEARCH_TRAPS_H

#include "head.h"

void gdt_init();
void idt_init();

void send_eoi(int idt_index);

void write_xdt_ptr(xdt_ptr_t* p, short limit, int base);

#endif //wzb_OSKERNEL_RESEARCH_TRAPS_H
