#include "main.h"
char *_strncat(char *dest, char *src, int n);

/**
**_strncat - function to concatenate strings.
*@dest: destination pointer.
*@src: source pointer.
*Return: Concatenated string.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i);

	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0'
	printf("%s\n", dest);
}
