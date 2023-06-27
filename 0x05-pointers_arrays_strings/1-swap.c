#include <stdio.h>

/**
 * swap_int - entry point
 * Description: a function that swaps the values of two integers
 * @a: integer
 * @b: integer
 * Return: void
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
