#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/*
 * This files contains functions need to use _printf
 */

/**
 * print_char - Function prints a character
 * @c: Character to be printed
 * Return: 1 (Number of characters to be printed)
 */
int print_char(const char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - Function prints a string
 * @s: String to be printed
 * Return: Number of characters to be printed
 */
int print_string(const char *s)
{
	int len;

	if (s == NULL)
	{
		s = "(null)";
	}

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	write(1, s, len);
	return (len);
}

/**
 * print_percent - Function prints the precent symbol
 * Return: 1 (Number of characters to be printed)
 */
int print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

/**
 * print_arg - Function prints an argument based on the format specifier
 * @c: Format parameter
 * @args: Argument list
 * Return: Number of characters to be printed
 */
int print_arg(const char *c, va_list args)
{
	switch (*c)
	{
		case 'c':
			return (print_char((char)va_arg(args, int)));

		case 's':
			return (print_string(va_arg(args, char *)));

		case '%':
			return (print_percent());

		case 'd':
		case 'i':
			return (print_int(va_arg(args, int)));

		default:
			return (print_char('%') + print_char(*c));
	}
}

/**
 * print_int - Function prints an integer
 * @num: Integer to be printed
 * Return: Number of characters to be printed
 */
int print_int(int num)
{
	int count, digit, i;
	char buffer[12];

	count = 0;
	i = 0;

	if (num == 0)
	{
		return (print_char('0'));
	}

	if (num < 0)
	{
		count += print_char('-');
		num *= -1;
	}

	while (num > 0)
	{
		digit = num % 10;
		buffer[i] = digit + '0';
		i++;
		num /= 10;
	}

	for (i = i - 1; i >= 0; i--)
	{
		count += print_char(buffer[i]);
	}

	return (count);
}
