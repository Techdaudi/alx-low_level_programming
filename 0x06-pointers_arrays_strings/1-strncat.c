#include "main.h"
char *_strncat(char *dest, char *src, int n);

/**
*_strncat - Function that concatenates two strings
*@dest: Destination string
*@src: Source string
*@n: Integer
*
*Return: Destination pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i);

	for (j = 0; src[j] != '\0' && j < n; ++j)
	{
		dest[i] = src[j];
		++i;
	}

	dest[i + n + 1] = '\0';

	return (dest);
}
