#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - entry point
 * @size: size of the array
 * @c: char to be filled the array
 * Return: the filled array
 */

char *create_array(unsigned int size, char c)

{
	unsigned int f;
	char *k;

	if (size == 0)
	{
		return (NULL);
	}
	k = malloc(size * sizeof(char));
	if (k == NULL)
	{
		return (NULL);
	}
	for (f = 0; f < size; f++)
	{
		k[f] = c;
	}
	return (k);
}
