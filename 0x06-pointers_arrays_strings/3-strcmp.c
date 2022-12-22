#include "main.h"
int _strcmp(char *s1, char *s2);

/**
*_strcmp - function that compares 2 strings.
*@s1: destination string
*@s2: source string
*Return: 0.
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	
	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] < s2[i]);
	}
	return (0);
}
