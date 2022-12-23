#include "main.h"
char *leet(char *s);
/**
*leet - function that encodes a string into 1337.
*@s: string.
*
*Return: Always zero.
*/
char *leet(char *s)
{
	int i = 0, j = 0;

	char numbers[5] = {'4', '3', '0', '7', '1'};
	char letters[5] = {'A', 'E', 'O', 'T', 'L'};
	
	while (s[i])
	{
		j = 0;

		while (j < 5)
		{
			if (s[i] = letters[j] || s[i] - 32 = numbers[j])
			{
				s[i] = numbers[j];
			}

			j++;
		}

		i++;
	}
	
	return (s);
}
