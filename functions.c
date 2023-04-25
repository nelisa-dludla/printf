#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/*
 * This files contains functions need to use _printf
 */

/**
 * _strlen - Function returns the length of *s
 * @s: Pointer Value with string inside
 * Return: count
 */
int _strlen(const char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}

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
	write(1, s, _strlen(s));
	return (char_count + _strlen(s));
}

/**
 * print_precent - Function prints the precent symbol
 * @char_count: Current character count
 * Return: New character count
 */
int print_precent(const int char_count)
{
	write(1, "%", 1);
	return (char_count + 1);
}
