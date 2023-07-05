#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns natural square root in number
 * @n: bumber to calculate square root
 * Return: the resulting sqare root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0);
}

/**
 * actual_sqrt_recursion - recurse to find natural
 * suare root of a number
 * @n: number to calculate the square root
 * @i: iterator
 * Return: resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
