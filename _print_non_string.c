#include "main.h"

/**
 * _print_non_string - prints a string with non-printable characters
 * @buf: buffer to store the output
 * @buf_i: index of buffer
 * @s: string to print
 * @len: ptr to the length counter
 *
 * Return: updated index of the buffer
 */
int _print_non_string(char *buf, int buf_i, char *s, int *len)
{
	int c = 0;

	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		if ((*s >= 0 && *s < 32) || *s >= 127)
		{
			if (buf_i + 4 >= 1024)
			{
				write(1, buf, buf_i);
				*len += buf_i;
				buf_i = 0;
			}

			buf[buf_i++] = '\\';
			buf[buf_i++] = 'x';
			buf_i = _print_hex(buf, buf_i, *s, 1, len);
			c += 4;
		}
		else
		{
			if (buf_i == 1024)
			{
				write(1, buf, buf_i);
				*len += buf_i;
				buf_i = 0;
			}

			buf[buf_i++] = *s;
			c += 1;
		}

		s++;
	}

	return (buf_i);
}
