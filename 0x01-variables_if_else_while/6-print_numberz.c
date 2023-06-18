#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * You can only use the putchar function
 * You can only use putchar twice in your code
 * Return: 0; success
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar (x);
	}
	putchar ('\n');

	return (0);
}
