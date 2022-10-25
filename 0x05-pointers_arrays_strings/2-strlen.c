#include "main.h"

/**
 * __strlen - calculates the length of a string
 *  @s: string
 *
 *  Return: length of the string
*/
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
