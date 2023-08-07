#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the aplhabet in lowercase
 * followed by a new line
 * Return: 0(success)
 */

void print_alphabet_x10(void)
{
	char m;
	int i;

	i = 0;

	while (i < 10)
	{
		m = 'a';
		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		i++;
	}
}

