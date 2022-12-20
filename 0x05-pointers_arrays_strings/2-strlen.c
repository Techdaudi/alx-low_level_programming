#include "main.h"
int _strlen(char *s);

/**
*_strlen - function to retun length of string.
*@s: a pointer string.
*Return: int.
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	return (i);
}
