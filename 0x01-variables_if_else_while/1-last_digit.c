#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0; success
 */
int main(void)
{
	/* local variable definition */
	int n = 100;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* check the boolean condition*/
	if (n % 10 > 5)
	{
		/* if the condition is true then print the following */
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		/* if else if condition is true then print the following */
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		/* if else if condition is true */
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
