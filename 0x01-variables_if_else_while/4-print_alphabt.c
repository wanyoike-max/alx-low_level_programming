#include <stdio.h>
/**
 * main - program prints the output of the alphabet in lower case excpt q and e
 * Return: 0(success)
 */

int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		if (d != 'q' && d != 'e')
		{
			putchar(d);
		}
		d++;
	}
	putchar('\n');
	return (0);
}
