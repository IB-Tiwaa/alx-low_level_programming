#include "main.h"


/**
 * _strcmp - A function that compares two strings
 * @string_1: Pointer to the first string.
 * @string_2: Pointer to the second string.
 *
 * Return: 0;
 */

int _strcmp(char *string_1, char *string_2)
{
	int result = 0;

	while (*string_1 == *string_2 && string_1 != '\0')
	{
		string_1++;
		string_2++;
	}

	if (string_1 != string_2)
		result = *string_1 - *string_2;
	return (result);
}
