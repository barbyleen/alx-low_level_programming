#include "main.h"

/*
 * _puts_recursion - prints a string followed by a new line
 * *s : character string
 * Retrun: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
}
