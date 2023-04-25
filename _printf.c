#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Function prints
 * @format: Pointer parameter
 * Return: char_count (Success)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int char_count;

	if (format == NULL)
	{
		return (-1);
	}

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
			char_count = print_arg(format, args, char_count);
		}
		format++;
	}

	va_end(args);
	return (char_count);
}
