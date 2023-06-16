#include <stdio.h>
/**
 * main - this program prints all numbers of base 16 in lowercase
 * Return: 0(success)
 */

int main(void)
{
	int i;
	char b;
	
	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
