//
// Created by wzbon 22-7-5.
//

#ifndef wzbOSKERNEL_RESEARCH_TRAPS_H
#define wzbOSKERNEL_RESEARCH_TRAPS_H

#include "head.h"

void gdt_init();
void idt_init();

void send_eoi(int idt_index);

void write_xdt_ptr(xdt_ptr_t* p, short limit, int base);

#endif //wzbOSKERNEL_RESEARCH_TRAPS_H
