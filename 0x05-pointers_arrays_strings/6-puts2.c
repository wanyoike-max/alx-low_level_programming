#include "main.h"

/**
 * puts2 - prints one char out of 2 of a str
 * followed by a new line
 * @str: str to print the char from
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
