#include <stdio.h>
/**
 * main - entery point
 * Description: You should produce the exact same output as in the example
 * Return: 0; success
 */

int main(void)

{
	long long int a;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
