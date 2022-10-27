#include "main.h"

/**
 * _strcat - concatenates strings and ends with a null character
 * @src: source
 * @dest: pointer of resulting string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
