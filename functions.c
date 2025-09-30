#include "main.h"
/**
 * _putchar - write the character for c.
 * @c: the character.
 * Return: On seccess 1.
 * On error, -1.
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - print string.
 * @str: the sting.
 * Return: nember of charecter printed.
 **/

int print_string(char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";
	while (*str)
		count += _putchar_buffer(*str++);
	return (count);
}

/**
 * print_number - print an integer
 * @n: Integer to print
 *
 * Return: number of charecters printed
 **/

int print_number(int n, int flags)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar_buffer('-');
		num = -n;
	}
	else
	{
		if (flags & F_PLUS)
			count += _putchar_buffer('+');
		else if (flags & F_SPACE)
			count += _putchar_buffer(' ');
		num = n;
	if (num / 10)
		count += print_number(num / 10);
	count += _putchar_buffer(num % 10 + '0');
	return (count);
}

/**
 * print_binary - print an unsigned int binary
 * @n: number to print
 *
 * Return: number of charecters printed
 **/
int print_binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += print_binary(n / 2);
	count += _putchar_buffer(n % 2 + '0');
	return (count);
}
