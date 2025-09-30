#ifndef MAIN_H
#define MAIN_H
#define F_PLUS  1
#define F_SPACE 2
#define F_HASH  4

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
void flush_buffer(void);
extern char output_buffer[1024];
extern int buffer_index;
int print_S(char *str);
int print_hex_address(unsigned long int n);
int _puts_buffer(char *str);
int print_pointer(void *ptr);
#endif
