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
		count += _putchar(*str++);
	return (count);
}

/**
 * print_number - print an integer
 * @n: Integer to print
 *
 * Return: number of charecters printed
 **/

int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('_');
		num = -n;
	}
	else
		num = n;
	if (num / 10)
		count += print_number(num / 10);
	count += _putchar(num % 10 + '0');
	return (count);
}
