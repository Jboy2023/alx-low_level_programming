#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: string to be printed
 * Description: a function that prints a string, followed by a new line.
 * Return: void
 */

void _puts_recursion(char *s)

{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
