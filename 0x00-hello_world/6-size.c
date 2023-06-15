#include <stdio.h>
/**
 * main - a program that prints the size od various computer types 
 * Return: 0(succes)
 */
int main(void)
{
	int i;
	char a;
	long int b;
	long long int c;
	float d;
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}
