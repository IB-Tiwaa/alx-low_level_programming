#include <stdio.h>

/**
 * main - is my function
 * Return: 0 is a success
 */
int main(void)
{
	int Integer = sizeof(int);
	int Character = sizeof(char);
	int LInteger = sizeof(long int);
	int LlInteger = sizeof(long long int);
	int Float = sizeof(float);

	printf("Size of an int: %d byte(s)\n", Integer);
	printf("Size of a char: %d byte(s)\n", Character);
	printf("Size of a long int: %d byte(s)\n", LInteger);
	printf("Size of a long long int: %d byte(s)\n", LlInteger);
	printf("Size of a float: %d byte(s)\n", Float);

	return (0);
}
