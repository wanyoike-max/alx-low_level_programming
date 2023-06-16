#include <stdio.h>
/**
 * main - prints the alphabet in lower case
 * Return: 0(success)
 */
int main(void)
{
	char d;
	
	for (d = 'a'; d <= 'z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
