#include <stdio.h>
/**
 * _putchar - writes character c to stdout
 * @c: character to print
 * Return: 1(success)
 * on error, -1 is returened
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
