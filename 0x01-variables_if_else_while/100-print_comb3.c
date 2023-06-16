#include <stdio.h>
/**
 * main - this program prints all possible combinations that arent similar
 * Return: 0(success)
 */

int main(void)
{
	int i;
	int m;

	for (i = 35; i < 45; i++)
	{
		for (m = 35; m < 45; m++)
		{
			if (i != m && i < m)
			{
				putchar(i + '0');
				putchar(m + '0');
				if (m == 44 && i == 43)
				{
					break
					;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
