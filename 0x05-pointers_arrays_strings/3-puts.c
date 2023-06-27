#include "main.h"

/**
 * _puts - entry point
 * Description:a function that prints a string
 * followed by a new line, to stdout
 * @str: string
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
