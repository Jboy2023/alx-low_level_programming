#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entery point
 * Return: 0, success
 */
int main(void)
{
	/*local variable definition*/
	int n = 100;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* chech the boolean condition*/
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
	return (0);
}
