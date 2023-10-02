#include "main.h"

/**
 * _isupper - entery point
 * Description: a function that checks for uppercase character
 * @c: integer
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 * Return: 1 || 0
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
