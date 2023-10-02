#include "main.h"
/**
 * _islower - entry point
 * @c: The parameter that takes the arg
 * Description:a function that checks for lowercase character
 * Return: void
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
