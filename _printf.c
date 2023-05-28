#include "printf.h"

/**
 * _printf - main function
 * @format: list of type of arguments passd to the function
 * Return: number of charachter printed
 */

int _printf(const char *format, ...)
{
	int counter = 0;
	char ch;
	const char *str;
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

					print_char(ch, &counter);
					break;
				case 's':
					str = va_arg(args, const char *);

					print_string(str, &counter);
					break;
				case '%':
					print_percent(&counter);
					break;
			}
		}
		else
		{
			print_char(*format, &counter);
		}
		format++;
	}

	va_end(args);
	return (counter);
}
