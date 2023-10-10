#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: variabla a memory is allocated to
 * Return: void
 */

void *malloc_checked(unsigned int b)

{
	void *m;

	m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}


