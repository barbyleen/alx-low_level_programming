#include "main.h"

/**
 * _strlen - calculates the length of a string
 *  @s: string
 *
 *  Return: length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}
	return (len);
}
