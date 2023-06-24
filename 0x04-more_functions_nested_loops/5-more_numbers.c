#include "main.h"

/**
 * more_numbers - entry point
 * Description: a function that prints 10 times the numbers, from 0 to 14
 *  followed by a new line
 *  You can only use _putchar three times in your code
 *  Return: void
 */

void more_numbers(void)

{
	int x;
	int y;

	for (x = "0"; x < "10"; x++)
	{
		for (y = "0"; y <= "14"; y++)
		{
			_putchar("%d",y);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
