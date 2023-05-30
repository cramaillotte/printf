#include "main.h"

/**
 * _print_hex - prints a hexadecimal value
 * @buf: the buffer to store the output
 * @buf_i: The index of the buffer
 * @n: The number to print
 * @uppercase: Indicates whether to use uppercase letters (1) or lowercase (0)
 * @len: pointer to the length counter
 *
 * Return: The updated index of the buffer.
 */
int _print_hex(char *buf, int buf_i, unsigned int n, int uppercase, int *len)
{
	char *digits;
	int c = 0;

	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";

	if (buf_i + 1 >= 1024)
	{
		write(1, buf, buf_i);
		*len += buf_i;
		buf_i = 0;
	}

	if (n / 16)
		buf_i = _print_hex(buf, buf_i, n / 16, uppercase, len);

	buf[buf_i++] = digits[n % 16];
	c++;

	return (buf_i);
}
