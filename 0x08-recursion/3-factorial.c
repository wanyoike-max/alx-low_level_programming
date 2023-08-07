#include "main.h"

/**
 * factorial - returns factorial of a no
 * @n: number to return factorial
 * Return: factorial of a n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
