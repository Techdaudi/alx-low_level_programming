#include "main.h"
char *cap_string(char *);

/**
*cap_string - function that capitalizes all words of a string.
*@str: string.
*Return: Always zero.
*/
char *cap_string(char *)
{
	int i;
	char *str;
	
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == 44 || str[i] == ';' || str[i] == 46 || str[i] == '!' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z' && str[i-2] != '.')
				str[i] = str[i] + 32;
		}
	}
	
	return (str);
}
