#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format: is a character string.
 * Return: the number of characters printed
 **/
char output_buffer[1024];
int buffer_index, flags = 0;

int _printf(const char *format, ...)
{
va_list args;
int count = 0;


if (!format || (format[0] == '%' && format[1] == '\0'))
	return (-1);
va_start(args, format);

while (*format)
{
	if (*format == '%')
	{
		format++;
		flags = get_flags(&format);
		if (*format == '\0')
			return (-1);
		if (*format == 'c')
		{
			count += _putchar_buffer(va_arg(args, int));
			format++;
			continue;
		}
		else if (*format == 's')
		{
			count += print_string(va_arg(args, char *));
			format++;
			continue;
		}
		else if (*format == '%')
		{
			count += _putchar_buffer('%');
			format++;
			continue;
		}
		else if (*format == 'd' || *format == 'i')
		{
			count += print_number(va_arg(args, int), flags);
			format++;
			continue;
		}
		else if (*format == 'b')
		{
			count += print_binary(va_arg(args, unsigned int), flags);
		}

		else if (*format == 'u') /* Here task 4 start */
		{
			count += print_decimal(va_arg(args, unsigned int)
					, flags); /* u is decimal.*/
		}
		else if (*format == 'o') /* o is an octal (base 8)*/
		{
			count += print_octal(va_arg(args, unsigned int), flags);
		}
		else if (*format == 'x') /* x is a number in hex in lower.*/
		{
			count += print_hex_lower(va_arg(args, unsigned int), flags);
		}
		else if (*format == 'X') /* X is a number in hex in upper.*/
		{
			count += print_hex_upper(va_arg(args, unsigned int), flags);
		}
		else if (*format == 'S')
		{
			count += print_S(va_arg(args, char *));
		}
		else if (*format == 'p')
		{
			count += print_pointer(va_arg(args, void *));
		}
		else if (*format == 'd' || *format == 'i')
		{
			count += print_number(va_arg(args, int), flags);
			format++;
			continue;
		}
		else if (*format == 'l')/* here task 9 (length modifiers) */
		{
			if (*(format + 1) == 'd' || *(format + 1) == 'i')
				count += print_long_int(va_arg(args, long int));
		}
		else if (*format == 'h')/*here task 9 */
		{
			if (*(format + 1) == 'd' || *(format + 1) == 'i')
			{
				count += print_short_int((short int)va_arg(args, int));
			}
		}
		else
		{
			count += _putchar_buffer('%');
			count += _putchar_buffer(*format);
			format++;
		}
	}
}
va_end(args);

flush_buffer();
return (count);
}
