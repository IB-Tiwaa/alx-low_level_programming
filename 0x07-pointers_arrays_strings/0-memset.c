#include "main.h"

/**
 * _memset - A function to set a memory
 * @s: pointer to char strings
 * @b: The value to be set
 * @n: The number of bytes
 * Return: *s
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
