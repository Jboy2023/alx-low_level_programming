#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints all possible combinations of single-digit numbers
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0; success
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
		if (num < '9')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');

	return (0);
}
