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

	char_count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			char_count += print_char(*format, char_count);
		}
		else
		{
			format++;
			if (*format == '\0')
				return (-1);

			else if (*format == 'c')
				char_count += print_char_speci(args, char_count);

			else if (*format == 's')
				char_count += print_string_speci(args, char_count);

			else if (*format == '%')
				char_count += print_percent_speci(char_count);

			else
				char_count = print_char(*format, char_count);
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
