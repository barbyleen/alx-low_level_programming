#include "main.h"

/**
 * _strlen - calculates the length of a string
 *  @s: string
 *
 *  Return: length of the string
*/
int _strlen(char *s)
{
	int len;

	while (*s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
