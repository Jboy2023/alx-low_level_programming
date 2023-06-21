#include "main.h"
/**
 * print_alphabet_x10 - entery point
 * Description: prints 10 times the alphabet, in lowercase
 * You can only use _putchar twice in your code
 * Return: void
 */

void print_alphabet_x10(void)

{
	int x;
	char letter;

	for (x = 0; x < 10; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
