#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array to be reversed
 * @n: number of elements in an array
 */

void reverse_aray(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
