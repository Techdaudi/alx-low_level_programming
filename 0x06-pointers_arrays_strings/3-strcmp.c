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
	int i = 0, j = 0; k = 0;
	int res1 = 0, res2;
	
	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}

	if (i <= j)
	{
		res2 = i;
	}
	else
	{
		res2 = j;
	}

	while (k < res2)
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
