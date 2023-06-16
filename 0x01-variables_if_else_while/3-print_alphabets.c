#include <stdio.h>
/**
 * main - prints the alphabet in lowercase then uppercase
 * Return: 0(success)
 */
int main(void)
{
	int d;

	for (d = 'a'; d <= 'z'; d++)
		putchar(d);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
