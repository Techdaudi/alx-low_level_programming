#include "main.h"
int _strcmp(char *s1, char *s2);

/**
*_strcmp - function that copies a string.
*@s1: destination string
*@s2: source string
*Return: integer.
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;
	int result = 0;
	
	for (i = 0; s1[i] != '\0'; ++i);
	for (j = 0; s2[j] != '\0'; ++j);

	if (i < j)
	{
		result = -1;
	}
	else if (i == j)
	{
		result = 0;
	}
	else
	{
		result = 1;
	}
	_putchar(result);
}
