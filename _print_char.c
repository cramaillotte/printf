#include "main.h"

/**
 * _print_char - prints a character
 * @ch: character to be printed
 * @c: counter
 * Return: 0
 */
 
int print_char(char ch, int *c)
{
	_putchar(ch);
	(*c)++;
	return (0);
}
