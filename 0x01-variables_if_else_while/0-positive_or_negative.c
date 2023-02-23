#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program assigns a random number to the variable n
 * and prints whether the number is positive or negative.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	srand(time(NULL));
	int n = rand();

	printf("The number is %d\n", n);

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
