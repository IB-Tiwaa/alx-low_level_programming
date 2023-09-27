#include"main.h"

/**
 * _strcat - A function that concat. strings
 * @source: Pointer to a source string
 * @destination: Pointer to destination string
 * Return: Destination 
 */


char *_strcat(char *destination, char *source)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (destination[i] != '\0')
	{
		i++
	}

	while (source[j] != '\0')
	{
		destination[i] = source[j];
		i++;
		j++;
	}
	destination[i] = '\0';
	
	return (destination);
}
