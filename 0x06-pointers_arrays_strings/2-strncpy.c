#include "main.h"


/**
 * _strncpy -  function that copies a string..
 * @source: Pointer to the source string
 * @destination: Pointer to  a string.
 * @n: length 
 * Return: destination String
 */

char *_strncpy(char *destination, char *source, int n)
{
	int i;

	i = 0;

	while (source[i] != '\0' && i < n)
	{
		destination[i] = source[i];
		i++;
	}

	while (i < n)
	{
		destination[i] = '\0';
		i++;
	}

	return (destination);
}
