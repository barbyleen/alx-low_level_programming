#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: element
 *
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n; i++)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
