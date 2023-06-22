#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - entery point
 * @n: integer
 * Return: void
 */
void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		/* if the condition is true then print the following */
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		/* else if the condition is true then print the following */
		printf("%d is zero\n", n);
	}
	else
	{
		/* if none of the conditions is true */
		printf("%d is negative\n", n);
	}
}
