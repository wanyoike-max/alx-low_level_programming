#include "main.h"
/**
 * print_diagonal - draws a diagonal in aterminus
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	if ( n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i; k;

		for (i = 0; i < n; i++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == i)
					_putchar('\\');
				else if (k < i)
					_putchar(' ');
			}
			_putchar(' ');
		}
	}
}
