#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints all the numbers of base 16 in lowercase
 * You can only use the putchar function
 * You can only use putchar three times in your code
 * Return: 0; success
 */
int main(void)
{
	int num;
	char low;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar (low);
	}
	putchar ('\n');
		return (0);
}
