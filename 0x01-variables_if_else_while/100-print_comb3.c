#include <stdio.h>
/**
 * main - this program prints all possible combinations that arent similar
 * Return: 0(success)
 */

int main(void)
{
	int i;
	int m;

	for (i = 48; i < 58; i++)
	{
		for (m = 48; m < 58; m++)
		{
			if (i != m && i < m)
			{
				putchar(i);
				putchar(m);
				if (m == 57 && i == 56)
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
