#include "main.h"

/**
 * _isdigit - entery point
 * Description:a function that checks for a digit (0 through 9)
 * @c: integer
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 * Return: 1 || 0
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
