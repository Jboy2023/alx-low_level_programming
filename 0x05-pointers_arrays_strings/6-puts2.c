#include "main.h"

/**
 * puts2 - entery point
 * Description: a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str:string to be printed
 * Return: void
 */

void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		if (*str%2==0)
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
