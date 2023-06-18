#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints the lowercase alphabet in reverse
 * You can only use the putchar function
 * You can only use putchar twice in your code
 * Return: 0; success
 */

int main(void)

{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar (letter);
	}
	putchar ('\n');

	return (0);
}
