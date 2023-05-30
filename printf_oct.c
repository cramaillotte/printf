#include "main.h"

/**
 * printf_oct - prints an octal
 * @val: arguments
 * Return: counter
 */

int printf_oct(va_list val)
{
	int i;
	int *ar;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	ar = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		ar[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(ar[i] + '0');
	}
	free(ar);
	return (counter);
}
