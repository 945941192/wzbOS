//
// Created by wzb on 22-6-23.
//

#include "../include/linux/tty.h"
#include "../include/linux/kernel.h"
#include "../include/linux/traps.h"

extern void clock_init();

void kernel_main(void) {
    console_init();
    gdt_init();
    idt_init();
    clock_init();

    printk("wzb os cool\n");

    __asm__("sti;");

    while (true);
}