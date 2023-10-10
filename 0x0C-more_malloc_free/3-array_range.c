#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an arrays of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: void
 */

int *array_range(int min, int max)
{
	int *i, t = 0;

	if (min > max)
	{
		return (NULL);
	}
	i = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (i == NULL)
		return (NULL);
	while (min <= max)
	{
		i[t] = min;
		t++;
		min++;
	}
	return (i);
}
