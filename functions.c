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
int print_char(const char c, int char_count)
{
	write(1, &c, 1);
	return (char_count + 1);
}

/**
 * print_string - Function prints a string
 * @s: String to be printed
 * @char_count: Current character count
 * Return: New character count
 */
int print_string(const char *s, int char_count)
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
	return (char_count + len);
}

/**
 * print_percent - Function prints the precent symbol
 * @char_count: Current character count
 * Return: New character count
 */
int print_percent(const int char_count)
{
	write(1, "%", 1);
	return (char_count + 1);
}

/**
 * print_arg - Function prints an argument based on the format specifier
 * @format: Pointer parameter
 * @args: Argument list
 * @char_count: Current character count
 * Return: New character count
 */
int print_arg(const char *format, va_list args, int char_count)
{
	if (*format == 'c')
	{
		char c = (char)va_arg(args, int);

		char_count = print_char(c, char_count);
	}
	else if (*format == 's')
	{
		char *s = va_arg(args, char *);

		if (s == NULL)
		{
			s = "(null)";
		}
		char_count = print_string(s, char_count);
	}
	else if (*format == '%')
	{
		char_count = print_percent(char_count);
	}
	else
	{
		char_count = print_char(*format, char_count);
	}
	return (char_count);
}
