#include <stdio.h>
/**
 *main - entry point
 * Description: prints a text to the standard error
 * Return: 1; success
 */

int main(void)

{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s \n", a);

	return (1);
}
