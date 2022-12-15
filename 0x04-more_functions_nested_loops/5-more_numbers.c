#include "main.h"

/**
* more_numbers - Prints the numbers 0 - 14 ten times
*
*/

void more_numbers(void)
{
int num, c;

for (c = 1; c <= 10; c++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
