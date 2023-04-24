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
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
