#include <stdio.h>
/**
 * main - coding different alphabet cases
 *
 * Return: 0
*/
int main(void)
{
	char x = 'a';
	char y = 'A';

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	for (y = 'A' ; y <= 'Z' ; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}

