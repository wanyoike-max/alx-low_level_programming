#include <main.h>

/**
 * _putchar - character of c to stdout
 * @c: chaaracter to print
 *
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
