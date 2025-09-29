#include "main.h"


/**
 * _printf - produces output according to a format.
 * @format: is a character string.
 * Return: the number of characters printed
 **/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

if (!format || (format[0] == '%' && format[1] == '\0'))
	return (-1);
va_strat(ap, format);

while (*format)
{
	if (*format == '%')
	{
		format++;
		if (*format == '\0')
			return (-1);
		if (*format == 'c')
			count += _putchar(va_arg(args, int));
		else if (*format == 's')
			count += print_string(va_arg(args, char));
		else if (*format == '%')
			count += _putchar('%');
		else if (*format == 'd' || *format == 'i')
			count += print_number(va_arg(args, int));
		else
		{
			count += _putchar('%');
			count += _putchar(*format);
		}

	}
	else
		count += _putchar(*format);
	format++;
}
va_end(args);
return (count);
}
