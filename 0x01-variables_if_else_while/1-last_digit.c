#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Function to check the last digit of a number.
 *
 * Return: prints 0 is successful otherwse 1.
 */

int main(void)
{
	/*Function to print the last digit of a number*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 0)
	{
		int rem = n % 10;

		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	}
	else if (n % 10 == 0)
	{
		int rem = n % 10;

		printf("Last digit of %d is %d and is 0\n", n, rem);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		int rem = n % 10;

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);
	}
	
	return (0);
}
