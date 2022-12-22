#include "main.h"
char *string_toupper(char *);

/**
*string_toupper - func that changes all lowercase letters of a string to uppercase.
*@str: string.
*Return: Always zero.
*/
char *string_toupper(char *)
{
	int i;
	char *str;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	_putchar(str);
	return (0);
}
