#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: integer
 * Description:a function that returns the factorial of a given number.
 * Return: 1 || -1; success
 */

int factorial(int n)

{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
