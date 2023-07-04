#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * Description:a function that prints n elements of an array of integers
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as stored in array
 * You are allowed to use printf
 * @a: integer
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != (n - 1))
	{
		printf(",");
	}
	}
	printf("\n");
}
