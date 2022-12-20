#include <stdio.h>
char *_strcpy(char *dest, char *src);

/**
**_strcpy - function to print reverse of string.
*@dest: a pointer int.
*@src: integer
*Return: Nothing.
*/
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; ++n)
	{
		dest[n] = src[n];
		++n
	}
	dest[n] = '\0';
	return (dest);
}
