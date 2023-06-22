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
int x = 1;

while (x < 101)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("%s", "FizzBuzz");
}
else if (x % 3 == 0)
{
printf("%s", "Fizz");
}
else if (x % 5 == 0)
{
printf("%s", "Buzz");
}
else
{
printf("%d", x);
}

if (x != 100)
{
printf(" ");
}
x++;
}
printf("\n");
return (0);
}
