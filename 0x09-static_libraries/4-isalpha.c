#include "main.h"
/**
 * _isalpha - entery point
 * @c: parameter
 * Description:a function that checks for alphabetic character
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * Return: void
 */

int _isalpha(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
