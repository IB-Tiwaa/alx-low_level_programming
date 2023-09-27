#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array
 * @a: Pointer to the array;
 * @n: size of the array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;

	int temp;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
