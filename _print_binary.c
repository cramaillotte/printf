#include "main.h"

/**
 * _print_binary - prints an unsigned int in binary format
 * @buf: the buffer to store the output
 * @buf_i: index of the buffer
 * @n: unsigned int to print
 * @len: ptr to the length counter
 *
 * Return: updated index of the buffer
 */

int _print_binary(char *buf, int buf_i, unsigned int n, int *len)
{
	int c = 0;

	if (n / 2)
		buf_i = _print_binary(buf, buf_i, n / 2, len);

	if (buf_i == 1024)
	{
		write(1, buf, buf_i);
		*len += buf_i;
		buf_i = 0;
	}

	buf[buf_i++] = '0' + (n % 2);
	*len += 1;
	c += 1;

	return (buf_i);
}
