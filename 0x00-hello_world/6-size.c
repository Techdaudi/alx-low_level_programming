#include <stdint.h>

/**
 * main - Prints string
 * Return: returns 0 if successful otherwise 1
 */

int main(void)
{
    /*Function to print size of types*/
    char char1;
    int int1;
    long int int2;
    long long int int3;
    float float1;
    printf("Size of a char: ,%lu byte(s)\n",(unsigned long)sizeof(char1));
    printf("Size of a int: ,%lu byte(s)\n",(unsigned long)sizeof(int1));
    printf("Size of a long int: ,%lu byte(s)\n",(unsigned long)sizeof(int2));
    printf("Size of a long long int: ,%lu byte(s)\n",(unsigned long)sizeof(int3));
    printf("Size of a float: ,%lu byte(s)\n",(unsigned long)sizeof(float1));

    return (0);
}
