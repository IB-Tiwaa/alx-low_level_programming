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
	int long_long_int = sizeof(long long int);
	int Float = sizeof(float);

	printf("Size of a char: %d byte(s)\n", Character);
	printf("Size of a int: %d byte(s)\n", Integer);
	printf("Size of a char: %d byte(s)\n", LInteger);
	printf("Size of a char: %d byte(s)\n", lonf_long_int );
	printf("Size of a char: %d byte(s)\n", Float);
	return (0);
}
