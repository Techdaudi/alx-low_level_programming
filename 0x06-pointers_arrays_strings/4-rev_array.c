#include "main.h"
void reverse_array(int *a, int n);

/**
*reverse_array - Function that reverses the content of an array of integers.
*@a: Array
*@n: Integer
*Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int i, j, l, *ptr;
	int temp;

	ptr = a;

	for (i = 1; i < n; ++i)
	{
		ptr++;
	}

	for (j = 0; j < i / 2; j++)
	{
		temp = a[j];
		a[k] = *ptr;
		*ptr = temp;
		ptr--;
	}
}
