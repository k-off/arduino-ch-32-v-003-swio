#ifndef UART_H
#define UART_H

#define UART_BAUD 38400
#define UBRR_VAL (F_CPU/16/UART_BAUD-1)

#include <stdio.h>
extern FILE *uart;

void uart_init();

#endif
