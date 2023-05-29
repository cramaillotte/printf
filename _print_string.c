#include "main.h"

/**
 * _print_string - prints string
 * @s: string to be printed
 * @c: counter
 * Return: 0
 */
 
int _print_string(char *s, int *c)
{
	while(*s)
	{
		_pputs(s);
		s++;
		(*c)++;
	}
	
	return (0);
}
