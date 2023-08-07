#include <stdio.h>
/**
 * main - this program prints all possible outcomes of 3 combinations
 * Return: 0(success)
 */

int main(void)
{
	int i, m, l;

	for (i = 48; i < 58; i++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > i)
				{
					putchar(i);
					putchar(m);
					putchar(l);
					if (i != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
