#include "main.h"

/**
 * count_hex_digits - helper function
 * @n: number to count digits
 *
 * Return: number of hexadecimal digits
 */

int count_hex_digits(unsigned long int n)
{
	int c = 0;

	if (n == 0)
		return (1);

	while (n > 0)
	{
		c++;
		n /= 16;
	}

	return (c);
}

/**
 * _print_pointer - prints a pointer address
 * @buf: buffer to store the output
 * @buf_i: index of the buffer
 * @p: pointer to print
 * @len: pointer to the length counter
 *
 * Return: updated index of the buffer.
 */
int _print_pointer(char *buf, int buf_i, void *p, int *len)
{
	unsigned long int address = (unsigned long int)p;
	int c = 0;

	if (buf_i + 1 >= 1024)
	{
		write(1, buf, buf_i);
		*len += buf_i;
		buf_i = 0;
	}

	buf[buf_i++] = '0';
	buf[buf_i++] = 'x';

	buf_i = _print_hex(buf, buf_i, address, 0, len);
	c += 2 + count_hex_digits(address);

	return (buf_i);
}

