#include "main.h"

/**
 * _strncat - appends two strings with n bytes
 * @src: source
 * @dest: resulting string
 * @n: number of char to be copied
 * @Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[i] = src[b];
		b++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
