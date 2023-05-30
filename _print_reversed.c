#include "main.h"

/**
 * helper - helper function
 * @s: string to print
 *
 * Return: number of characters printed
 */
int helper(char *s)
{
	int c = 0;
	char buf[1024];
	int i = 0;

	if (*s)
	{
		c += helper(s + 1);
		buf[i] = *s;
		i++;

		if (i == 1024)
		{
			write(1, buf, i);
			c += i;
			i = 0;
		}
	}

	if (i > 0)
	{
		write(1, buf, i);
		c += i;
	}

	return (c);
}


/**
 * _print_reversed - Prints a string in reverse.
 * @s: The string to print.
 *
 * Return: The number of characters printed.
 */
int _print_reversed(char *s)
{
	int c = 0;

	if (s == NULL)
		s = "(null)";

	c += _print_reversed(s);

	return (c);
}
