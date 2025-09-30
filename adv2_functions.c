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
 * flash_butter - ...
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
