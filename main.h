#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *str);
int print_number(int n);
int print_binary(unsigned int n);
int print_decimal(unsigned int n);
int print_octal(unsigned int n);
int print_hex_lower(unsigned int n);
int print_hex_upper(unsigned int n);
int _putchar_buffer(char c);
int flash_buffer(void);
#endif
