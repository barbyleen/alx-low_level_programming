#include "main.h"

/**
 * *_strncpy - copies n characters of a string
 * @src: copy from
 * @dest: copy to
 * @n: number of char to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (j < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
