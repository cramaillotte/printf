#include "main.h"

/**
 * _print_int - prints an integer
 * @buf: the buffer to store the output
 * @buf_i: the index of the buffer
 * @n: the integer to print
 * @len: pointer to the length counter
 *
 * Return: the updated index of the buffer
 */
int _print_int(char *buf, int buf_i, int n, int *len)
{
	unsigned int abs_num;
	int j, i = 0, c = 0;
	char num_str[11];

	if (n < 0)
	{
		if (buf_i == 1024)
		{
			write(1, buf, buf_i);
			*len += buf_i;
			buf_i = 0;
		}

		buf[buf_i++] = '-';
		*len += 1;
		c += 1;
		abs_num = -n;
	}
	else
		abs_num = n;

	while (abs_num != 0)
	{
		num_str[i++] = '0' + (abs_num % 10);
		abs_num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		if (buf_i == 1024)
		{
			write(1, buf, buf_i);
			*len += buf_i;
			buf_i = 0;
		}
		buf[buf_i++] = num_str[j];
		*len += 1;
		c += 1;
	}
	return (buf_i);
}
