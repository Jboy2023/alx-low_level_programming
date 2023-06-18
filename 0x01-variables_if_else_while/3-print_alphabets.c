#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints the alphabets in lowercase and in uppercase
 * You can only use the putchar function
 * You can only use the putchar three times
 * Return: 0; success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');

		return (0);
}
