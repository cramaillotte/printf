#include "main.h"

/**
 * _print_char - prints a character
 * @ch: character to be printed
 * @c: counter
 * Return: 0
 */

int _print_char(char *buf, int buf_i, char ch, int *len)
{
	if (buf_i == 1024)
	{
		write(1, buf, buf_i);
		*len += buf_i;
		buf_i = 0;
	}
	buf[buf_i++] = ch;
	*len += 1;
	return (buf_i);
}
