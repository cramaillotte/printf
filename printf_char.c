#include "main.h"

/**
 * printf_char - prints a char
 * @val: arg
 * Return: 1 Always
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
