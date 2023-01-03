#include "main.h"
char *_memset(char *s, char b, unsigned int n);

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer.
 * @b: character.
 * @n: integer.
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
