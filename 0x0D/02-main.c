#include <stdio.h>

/**
 * main - entry point
 * Description: prints the name of the file it is compiled from
 * Return: 0, success
 */

int main(void)

{
	printf("%s\n", __FILE__);

	return (0);
}
