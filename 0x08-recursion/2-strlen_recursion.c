#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - prints the length of a string
 * @s: length of the string
 * Description: a function that returns the length of a string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s)+ 1);
}
