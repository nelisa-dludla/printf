#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_binary - Function prints an unsigned int as binary
 * @num: Unsigned int to be printed
 * Return: Number of character(s) to be printed
 */

int print_binary(unsigned int num)
{
	int count, i;
	char buffer[33];

	count = 0;

	while (num != 0)
	{
		buffer[count++] = (num & 1) + '0';
		num >>= 1;
	}

	for (i = count - 1; i >= 0; i--)
	{
		print_char(buffer[i]);
	}

	return (count);
}
