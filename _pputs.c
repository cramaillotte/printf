#include "main.h"

/**
 * _pputs - prints a string to stdout
 * @s: pointer to string
 * Return: 0
 */

int _pputs(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
	
	return (0);
}
