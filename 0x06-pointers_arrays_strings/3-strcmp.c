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
	int i, j;
	int k = 0;
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

	while (k < res1)
	{
		if s1[k] == s2[k]
		{
			k++;
			continue;
		}
		else
		{
			res2 = s1[k] - s2[k];
			break;
		}

		k++;
	}

	return (res2);
}
