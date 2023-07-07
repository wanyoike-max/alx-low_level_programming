#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints no of arguments
 * @argc: holds no of arguments passed
 * @argv: array pointers that holdd the argument
 * Return: 0(success)
 */

int main(int argc, char __attribute__((unused)), *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}

	printf("%d\n", m);
	return (0);
}
