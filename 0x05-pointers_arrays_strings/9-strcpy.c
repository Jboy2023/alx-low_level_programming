#include "main.h"

/**
 * _strcpy - entry point
 * Description:a function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: destination value
 * @src: source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int t;

	for (i = 0; src[t] != '\0'; t++)
	{
		dest[t] = src[t];
	}
	dest[t++] = '\0';
	return (dest);
}
