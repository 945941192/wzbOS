//
// Created by wzb on 22-6-23.
//

#include "../include/linux/tty.h"
#include "../include/linux/kernel.h"
#include "../include/linux/traps.h"
#include "../include/linux/mm.h"

extern void clock_init();

void kernel_main(void) {
    console_init();
    gdt_init();
    idt_init();
    clock_init();

    print_check_memory_info();
    memory_init();
    memory_map_int();

    for (int i = 0; i < 3; ++i) {
        void* p = get_free_page();
        printk("%p\n", p);

        free_page(p);
    }

    __asm__("sti;");

    while (true);
}