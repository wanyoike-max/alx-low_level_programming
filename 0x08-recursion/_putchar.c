#include <unsistd.h>

/**
 * _putchar -  writes the chracter c to stdout 
 * @c: the chrarcter to print 
 *
 * Return: on success 1
 * on error -1 and errno is set appropriately 
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

