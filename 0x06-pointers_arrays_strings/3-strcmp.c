#include "main.h"
int _strcmp(char *s1, char *s2);

/**
  *_strcmp - function that compares 2 strings.
  *@s1: destination string
  *@s2: source string
  *	
  *Return: 0.
  */
int _strcmp(char *s1, char *s2)
{
	int i, j, k;
	int res1, res2;
	
	for (i = 0; s1[i] != '\0'; ++i);

	for (i = 0; s2[j] != '\0'; ++j);

	if (i <= k)
	{
		res1 = i;
	}
	else
	{
		res1 = j;
	}

	for (k = 0; k <= res1; k++)
	{
		if s1[k] == s2[k]
		{
			continue;
		}
		else
		{
			res2 = s1[k] - s2[k];
			break;
		}
	}

	return (res2);
}
