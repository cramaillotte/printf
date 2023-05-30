#include "main.h"

/**
 * _printf - it prints!
 * @format: list of type of argument passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, buf_i = 0, c = 0;
	char buf[1024];
	va_list a;
	
	va_start(a, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					buf_i = _print_char(&buf[buf_i], buf_i, c, &c);
					break;
				case 's':
					buf_i = _print_string(&buf[buf_i], &c);
					break;
				case '%':
					buf_i = _print_percent(&c);
					break;
				case 'i':
				case 'd':
					buf_i = _print_int(&buf[buf_i], buf_i, c, &c);
					break;
				case 'b':
					buf_i = _print_binary(&buf[buf_i], buf_i, va_arg(a, unsigned int), &c);
					break;
				case 'u':
				case 'o':
				case 'x':
				case 'X':
					buf_i = _print_unsigned(&buf[buf_i], buf_i, va_arg(a, unsigned int), 10, 0, &c);
					break;
				case 'S':
					buf_i = _print_non_string(&buf[buf_i], buf_i, va_arg(a, char *), &c);
					break;
				case 'p':
					buf_i = _print_pointer(&buf[buf_i], buf_i, va_arg(a, void *), &c);
					break;
				case 'r':
					buf_i = _print_reversed(&buf[buf_i]);
					break;
				default:
					buf_i = _print_percent(&c);
					break;
			}
		}
		else
		{
			if (buf_i == 1024)
			{
				write (1, buf, buf_i);
				c += buf_i;
				buf_i = 0;
			}

			buf[buf_i++] = format[i];
		}
		i++;
	}
	if (buf_i > 0)
	{
		write(1, buf, buf_i);
		c += buf_i;
	}
	va_end(a);
	return (c);
}
