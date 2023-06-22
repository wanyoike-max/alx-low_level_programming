#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * description: prints numbers from 1 to 100
 * fizz for multipkes of 3, buzz for 5
 * fizzbuzz for multiples of both
 * Returm: 0(success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else 
			printf("%i", i);
		if (i < 100)
			prntf(" ");
	}
	printf("\n");
	return (0);
}
