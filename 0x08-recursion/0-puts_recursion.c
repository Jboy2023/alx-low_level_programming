#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: string to be printed
 * Description: a function that prints a string, followed by a new line.
 * Return: void
 */

void _puts_recursion(char *s)

{

	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
