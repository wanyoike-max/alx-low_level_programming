#include <stdio.h>
/**
 * main - this program prints the alphabet in reverse lowercase
 * Return: 0(success)
 */

int main(void)
{
	char m = 'z';

	while (m >= 'a')
	{
		putchar(m);
		--m;
	}
	putchar('\n');
	return (0);
}
