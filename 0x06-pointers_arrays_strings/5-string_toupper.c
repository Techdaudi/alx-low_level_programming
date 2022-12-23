#include "main.h"
char *string_toupper(char *);

/**
*string_toupper - func that changes all lowercase letters of a string to uppercase
*@str: string
*Return: str
*/
char *string_toupper(char *)
{
	int i;
	char *str;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
