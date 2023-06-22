#include "main.h"
/**
 * _isupper - tells us if a characer is in uppercase
 * @c: the character to be tested
 * Return: 1 if its uppercase otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
