#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Function prints
 * @format: Pointer parameter
 * Return: Number of character(s) to be printed (excluding '\0')
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
			char_count += print_char(*format);
		}
		else
		{
			format++;

			if (*format == '\0')
			{
				return (-1);
			}
			char_count += print_arg(format, args);
		}
		format++;
	}

	va_end(args);
	return (char_count);
}
