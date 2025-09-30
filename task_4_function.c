#include "main.h"
/**
 * print_decimal - print an unsigned decimal (base 10) number
 * @n: unsigned int
 *
 * Return: number of charecters printed
 **/
int print_decimal(unsigned int n)
{
	int count = 0;

	if (n == 0)
		return (_putchar('0'));
	if (n / 10)
		count += print_decimal(n / 10);
	count += _putchar((n % 10) + '0');
	return (count);
}

/**
 * print_octal - print a number in octal (base 8)
 * @n: unsigned int
 *
 * Return: number of charecters printed
 **/
int print_octal(unsigned int n)
{
	int count = 0;

	if (n == 0)
		return (_putchar('0'));
	if (n / 8)
		count += print_octal(n / 8);
	count += _putchar((n % 8) + '0');
	return (count);
}
/**
 * print_hex_lower - print a number in hexidecimal (base 16)
 * in lower case.
 * @n: unsigned int
 *
 * Return: number of charecters printed
 **/
int print_hex_lower(unsigned int n)
{
	int count = 0;
	char hex[] = "0123456789abcdef";

	if (n == 0)
		return (_putchar('0'));
	if (n / 16)
		count += print_hex_lower(n / 16);
	count += _putchar(hex[n % 16]);
	return (count);
}
/**
 * print_hex_upper - print a number in hexidecimal (base 16)
 * in UPPER case.
 * @n: unsigned int
 *
 * Return: number of charecters printed
 **/
int print_hex_upper(unsigned int n)
{
	int count = 0;
	char hex[] = "0123456789ABCDEF";

	if (n == 0)
		return (_putchar('0'));
	if (n / 16)
		count += print_hex_upper(n / 16);
	count += _putchar(hex[n % 16]);
	return (count);
}
