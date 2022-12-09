#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Function to check if a number is positive or negative.
 * @n: random varable.
 *
 * Return: Returns 0 if function is successful otherwise 1.
 */

int main(void) 
{
	/*Func to check whether a random number is +ve or -ve*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0) 
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
    
	return (0);
}
