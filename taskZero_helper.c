#include "printf.h"

/**
 * print_char - helper function
 * @ch: the charachter to be printed
 * @counter: pointer to counter
 */

int print_char(char ch, int *counter)
{
	_putchar(ch);
	(*counter)++;
	return (0);
}

/**
 * print_string - helper function
 * @str: the string to be printed.
 * @counter: pointer to counter
 */

int print_string(const char *str, int *counter)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		(*counter)++;
	}

	return (0);
}

/**
 * print_percent - helper function
 * @counter: pointer to counter
 */

int print_percent(int *counter)
{
	_putchar('%');
	(*counter)++;
	return (0);
}
