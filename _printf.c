#include "main.h"

/**
 * _printf - it prints!
 * @format: list of type of argument passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int c = 0;
	char ch, *s;
	va_list args;
	
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					ch = (char)va_arg(args, int);
					_print_char(ch, &c);
					break;
				case 's':
					s = va_arg(args, char *);
					_print_string(s, &c);
					break;
				case '%':
					_print_percent(&c);
					break;
				default:
					/* unknown */
					break;
			}
		}
		else
		{
			_print_char(*format, &c);
		}
		format++;
	}
	va_end(args);
	return (c);
}
