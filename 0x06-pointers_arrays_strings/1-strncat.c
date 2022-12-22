#include "main.h"
char *_strncat(char *dest, char *src, int n);

/**
*_strncat - function that concatenates two strings.
*@dest: destination string
*@src: source string
*@n: integer.
*Return: Return zero.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i);

	for (j = 0; j < n; ++j)
	{
		dest[i] = src[j];
		++i;
	}
	dest[i] = '\0';
	_putchar(dest);
}
