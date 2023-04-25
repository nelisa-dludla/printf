#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/*
 * This files contains functions need to use _printf
 */

/**
 * print_char - Function prints a character
 * @c: Character to be printed
 * @char_count: Current character count
 * Return: New character count
 */
int print_char(const char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - Function prints a string
 * @s: String to be printed
 * @char_count: Current character count
 * Return: New character count
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
 * @char_count: Current character count
 * Return: New character count
 */
int print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

/**
 * print_arg - Function prints an argument based on the format specifier
 * @format: Pointer parameter
 * @args: Argument list
 * @char_count: Current character count
 * Return: New character count
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

		default:
			return (print_char('%') + print_char(*c));
	}
}