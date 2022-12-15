#include "main.h"
int _isupper(int c);

/**
*_isupper - Prints absolute valu of number.
* @c: parameter to be retuned
*return: 0 if successful otherwise 1.
*/

int _isupper(int c)
{
	/*Checks for digit*/
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
