#include "main.h"
/* Task 5 function */

/**
 * _putchar_buffer - local buffer of 1024 chars in order to call
 * write as little as possible.
 * @c: char
 *
 * Return: 1
 **/
int _putchar_buffer(char c)
{
	output_buffer[buffer_index++] = c;
	if (buffer_index == 1024)
	{
		write(1, output_buffer, buffer_index);
		buffer_index = 0;
	}
	return (1);
}

/**
 * flush_buffer - ...
 *
 * Return: void
 **/
void flush_buffer(void)
{
	if (buffer_index > 0)
	{
		write(1, output_buffer, buffer_index);
		buffer_index = 0;
	}
}

/* Here task 7 function*/
/**
 * print_S -  prints the string.
 * @str: pointer
 *
 * Return: number of char printed.
 **/
int print_S(char *str)
{
	int count = 0;

	if (!str)
		return (print_string("null"));
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			count += _putchar_buffer('\\');
			count += _putchar_buffer('x');
			count += print_hex_upper((unsigned char) *str);
		}
		else
			count += _putchar_buffer(*str);
		str++;
	}
	return (count);
}
