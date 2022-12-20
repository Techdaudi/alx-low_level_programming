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
	char temp_src = *src;
	*src = *dest;
	*dest = temp_src;
	result = *dest;

	return (result);
}
