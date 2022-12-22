#include "main.h"
char *_strcat(char *dest, char *src);

/**
*_strcat - function to concatenate strings.
*@dest: destination pointer.
*@src: source pointer.
*Return: Zero.
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i);

	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[i] = src[j];
		++i;
	}
	_putchar(dest);
}
