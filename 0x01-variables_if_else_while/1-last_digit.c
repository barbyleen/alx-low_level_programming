#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	printf("Last digit of %d is %d", n, b);
	if (b > 5)
		printf("and is greater than 5");
	else if (b > 6 && b !=0)
		printf("and is less than 6 and not 0");
	else
		printf("and is 0");
	printf("\n");
	return (0);
}

