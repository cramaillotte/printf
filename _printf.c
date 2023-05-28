#include "main.h"

/**
 * process_char - helper function to process the 'c' conversion specifier
 * @ch: the character to be printed
 * @counter: pointer to the character counter
 */
void process_char(char ch, int *counter)
{
	print_char(ch, counter);
}

/**
 * process_string - helper function to process the 's' conversion specifier
 * @str: the string to be printed
 * @counter: pointer to the character counter
 */
void process_string(const char *str, int *counter)
{
	print_string(str, counter);
}

/**
 * process_percent - helper function to process the '%' conversion specifier
 * @counter: pointer to the character counter
 */
void process_percent(int *counter)
{
	print_percent(counter);
}

/**
 * process_unknown - helper function to process unknown format specifier
 * @format: the format specifier string
 * @counter: pointer to the character counter
 */
void process_unknown(const char *format, int *counter)
{
	print_char('%', counter);
	print_char(*format, counter);

	if (*format != '\0')
	{
		print_char('[', counter);
		print_string(format, counter);
		print_char(']', counter);
	}
}

/**
 * _printf - main function
 * @format: list of type of arguments passd to the function
 * Return: number of charachter printed
 */

int _printf(const char *format, ...)
{
	int counter = 0;
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
					process_char(va_arg(args, int), &counter);
					break;
				case 's':
					process_string(va_arg(args, const char *), &counter);
					break;
				case '%':
					print_percent(&counter);
					break;
				default:
					process_unknown(format, &counter);
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
