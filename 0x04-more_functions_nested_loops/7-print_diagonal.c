#include "main.h"
/**
 * print_diagonal - draws a diagonal in aterminus
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
int i, k;

if (n <= 0)
_putchar('\n');
for (i = 0; i < n; i++)
{
for (k = 0; k < i; k++)
{
_putchar(' ');
}

_putchar('\\');
_putchar('\n');
}
}
