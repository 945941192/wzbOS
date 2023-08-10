//
// Created by wzb on 22-6-26.
//

#ifndef wzb_OSKERNEL_TEACH_IO_H
#define wzb_OSKERNEL_TEACH_IO_H

char in_byte(int port);
short in_word(int port);

void out_byte(int port, int v);
void out_word(int port, int v);

#endif //wzb_OSKERNEL_TEACH_IO_H
