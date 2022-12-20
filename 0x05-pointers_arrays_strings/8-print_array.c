#include <stdio.h>
void print_array(int *a, int n);

/**
*print_array - function to print reverse of string.
*@a: a pointer int.
*@n: integer
*Return: Nothing.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
