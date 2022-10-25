#include "main.h"

/**
 * _puts - prints string to standard output
 * @str: string pointer
 *
 * Return: 0
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
