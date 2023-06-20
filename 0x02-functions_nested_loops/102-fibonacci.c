#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 * starting with 1 and 2
 * Return: 0(success)
 */

int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 2, sum;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
