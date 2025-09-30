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
	unsigned char c;

	if (!str)
		return (print_string("null"));
	while (*str)
	{
		c = (unsigned char) *str;
		if (c < 32 || c >= 127)
		{
			count += _putchar_buffer('\\');
			count += _putchar_buffer('x');
			if (c < 16)
			{
				count += _putchar_buffer('0');
			}
			count += print_hex_upper(c);
		}
		else
			count += _putchar_buffer(*str);
		str++;
	}
	return (count);
}

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the argument
 * @i: take a parameter.
 * Return: Flags:
 **/

int get_flags(const char *format, int *i)
{
/* - + 0 # ' ' */
/* 1 2 4 8  16 */
	int j, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};
	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}
		if (FLAGS_CH[j] == 0)
			break;
	}
	*i = curr_i - 1;
	return (flags);
}
