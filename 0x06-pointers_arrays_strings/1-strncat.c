#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @source_string: A pointer to a string
 * @destination_string:  A pointer to a string
 * @n: number.
 * Return: destination string.
 */

char *_strncat(char *destination_string, char *source_string, int n)
{
	int index = strlen(destination_string);
	int a = 0;

	while (a < n && *source_string)
	{
		destination_string[index + a] = *source_string;
		source_string++;
		a++;
	}
	destination_string[index + a] = '\0';
	return (destination_string);
}
