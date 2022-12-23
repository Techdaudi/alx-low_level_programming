#include "main.h"
char *leet(char *);
/**
*leet - function that encodes a string into 1337.
*@s: string.
*@s2: string 2
*Return: Always zero.
*/
char *leet(char *)
{
	int i;
	char *s;
	char *s2;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			s2[i] = '4';
		else if (s[i] == 'e' || s[i] == 'E')
			s2[i] = '3';
		else if (s[i] == 'o' || s[i] == 'O')
			s2[i] = '0';
		else if (s[i] == 't' || s[i] == 'T')
			s2[i] = '7';
		else if (s[i] == 'l' || s[i] == 'L')
			s2[i] = '1';
		else
		{
			s2[i] = s[i];
		}
	}

	return (s2);
}
