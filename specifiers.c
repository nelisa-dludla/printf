#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char_speci - Function prints a character
 * @args: List of arguments passed to the function
 * @char_count: Current character count
 * Return: New character count
 */
int print_char_speci(va_list args, int char_count)
{
	char c = va_arg(args, int);

	return (print_char(c, char_count));
}

/**
 * print_string_speci - Function prints a string
 * @args: List of arguments passed to the function
 * @char_count: Current character count
 * Return: New character count
 */
int print_string_speci(va_list args, int char_count)
{
	char *s = va_arg(args, char *);

	return (print_string(s, char_count));
}

/**
 * print_percent_speci - Function prints the percent symbol
 * @char_count: Current character count
 * Return: New character count
 */
int print_percent_speci(int char_count)
{
	return (print_char('%', char_count));
}
