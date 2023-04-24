#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - Function prints a character
 * @c: Character to be printed
 * @char_count: Current character count
 * Return: New character count
 */
int print_char(char c, int char_count)
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
int print_string(char *s, int char_count)
{
	write(1, s, _strlen(s));
	return (char_count + _strlen(s));
}

/**
 * print_precent - Function prints the precent symbol
 * @char_count: Current character count
 * Return: New character count
 */
int print_precent(int char_count)
{
	write(1, "%", 1);
	return (char_count + 1);
}

/**
 * _printf - Function prints
 * @format: Pointer parameter
 * Return: char_count (Success)
 */
int _printf(const char *format, ...)
{
	va_list args;
	char c;
	char *s;
	int char_count;

	char_count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			char_count = print_char(*format, char_count);
		}
		else
		{
			format++;
			if (*format == '%')
			{
				char_count = print_precent(char_count);
			}
			else if (*format == 'c')
			{
				c = (char)va_arg(args, int);
				char_count = print_char(c, char_count);
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				char_count = print_string(s, char_count);
			}
		}
		format++;
	}

	va_end(args);
	return (char_count);
}
