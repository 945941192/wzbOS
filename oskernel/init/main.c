//
// Created by wzb on 23-8-9.
//

#include "../include/linux/tty.h"
#include "../include/linux/kernel.h"

void kernel_main(void) {
    console_init();

    char* a = 0xb8000;
    *a = 'Z';

    char* s = "ABCD";
    for (int i = 0; i < 20; ++i) {
        printk("name: %s, age:%d\n", s, i);
    }

    while (true);
}