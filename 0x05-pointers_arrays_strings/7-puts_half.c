#include "main.h"
#include <string.h>

/**
 * puts_half - entry point
 * Description:a function that prints half of a string, followed by a new line
 * The function should print the second half of the string
 * If the number of characters is odd
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)

{
	int l = 0;
	int m;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 1)
	{
		m = (l - 1) / 2;
		m += 1;
	}
	else
	{
		m = l / 2;
	}
	for (; m < l; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
