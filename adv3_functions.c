# include "main.h"
/**
 * _puts_buffer - prints a string using buffered putchar
 * @str: string to print
 *
 * Return: number of characters printed
 **/
int _puts_buffer(char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";
	while (*str)
	{
		count += _putchar_buffer(*str);
		str++;
	}
	return (count);
}

/**
 * print_hex_address - print an unsigned long int in hexadecimal
 * @n: the number (address) to print
 * @hex_digits: string of hexadecimal characters (e.g. "0123456789abcdef")
 *
 * Return: number of characters printed
 **/
int print_hex_address(unsigned long int n)
{
	int count = 0;
	char hex_digits[] = "0123456789abcdef";

	if (n / 16)
		count += print_hex_address(n / 16);
	count += _putchar_buffer(hex_digits[n % 16]);
	return (count);
}

/**
 * print_pointer - print a memory address (pointer)
 * @ptr: pointer to print
 * Return: number of characters printed
 **/
int print_pointer(void *ptr)
{
	int count = 0;

	unsigned long int address;

	if (ptr == NULL)
		return (_puts_buffer("(nil)"));
	address = (unsigned long int)ptr;
	count += _puts_buffer("0x");
	count += print_hex_address(address);
	return (count);
}

/*function of task 9 Handle length modifiers*/

/**
 * print_long_int - Prints a long integer.
 * @n: The long integer to print.
 *
 * Return: number of characters printed
 **/
int print_long_int(long int n)
{
	int count = 0;
	char c;

	if (n < 0)/*handle negative numbers*/
	{
		count += write(1, "-", 1);
		n = -n;
	}

	if (n / 10 == 0)/*if n is a single digit*/
	{
		c = n + '0';
		count += write(1, &c, 1);
	}
	else/*print the digit one by one*/
	{
		count += print_long_int(n / 10);
		c = (n % 10) + '0';
		count += write(1, &c, 1);
	}
	return (count);
}

/**
 * print_short_int - Prints a short integer.
 * @n: The short integer to print.
 *
 * Return: number of characters printed
 **/
int print_short_int(short int n)
{
	int count = 0;
	char c;

	/*handle negative numbers*/
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}

	if (n / 10 == 0)/*if n is a single digit*/
	{
		c = n + '0';
		count += write(1, &c, 1);
	}
	else
	{
		count += print_short_int(n / 10);
		c = (n % 10) + '0';
		count += write(1, &c, 1);
	}
	return (count);
}
