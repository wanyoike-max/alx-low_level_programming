#include "main.h"
/**
 * times_table - prints the the 9 times table starting with 0
 */

void times_table(void)
{
	int m, l, k;

	for (m = 0; m < 10; m++)
	{
		for (l = 0; l < 10; l++)
		{
			k = l * m;
			if (l == 0)
			{
				_putchar(k + '0');
			}
			if (k < 10 && l != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

