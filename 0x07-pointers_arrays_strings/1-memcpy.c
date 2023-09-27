#include "main.h"

/**
 * _memcpy - Copies a block of memory from
 * one location to another
 * @dest: A pointer to a destination memory
 * @src: A pointer to a source memory block
 * @n: The number bytes to copy
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
