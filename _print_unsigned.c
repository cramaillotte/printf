#include "main.h"

/**
 * _print_unsigned - prints an unsigned int
 * @buf: the buffer to store the output
 * @buf_i: the index of the buffer
 * @n: the unsigned int to print
 * @base: the base to use for printing (8 for octal, 10 for decimal, 16 for hexadecimal).
 * @uppercase: indicates whether to use uppercase letters for hexadecimal (1) or lowercase (0).
 * @len: pointer to the length counter
 *
 * Return: the updated index of the buffer
 */
int _print_unsigned(char *buf, int buf_i, unsigned int n, int base, int uppercase, int *len)
{
	char *digits;
	int c = 0;

	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";

	if (n / base)
		buf_i = _print_unsigned(buf, buf_i, n / base, base, uppercase, len);

	if (buf_i == 1024)
	{
		write(1, buf, buf_i);
		*len += buf_i;
		buf_i = 0;
	}

	buf[buf_i++] = digits[n % base];
	*len += 1;
	c += 1;

	return (buf_i);
}

