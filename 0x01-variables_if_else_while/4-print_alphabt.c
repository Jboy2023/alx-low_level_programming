#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints the alphabets in lowercase
 * Print all the alphabets execpt q and e
 * You can only use putchar function
 * You can only use putchar twice
 * Return: 0; success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar (letter);
	}
	putchar ('\n');

	return (0);
}
