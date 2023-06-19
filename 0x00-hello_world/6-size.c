#include <stdio.h>
/**
 * main - entery point
 * Description: You should produce the exact same output as in the example
 * Return: 0; success
 */

int main(void)

{
	char *variabletype[] = {"char", "unsigned char", "signed char", "int", "unsigned int", "short", "unsigned short", "long", "unsigned long", "long long","unsigned long long"};
	int i;

	for (i = 0; i < 11; i++)
	{
		printf ("Size of %s is %u\n", variabletype[i], (unsigned int)(sizeof(variabletype[i])));
	}
	
	return (0);
}
