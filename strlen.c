#include "main.h"

/**
 * _strlen - returs the length of a string using recursion
 * @s: string
 * Return: length int number
 */

int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + strlen(s + 1));
	}
	else
		return (0);
}
