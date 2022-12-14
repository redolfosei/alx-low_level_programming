#include <stdio.h>

/**
* print_to_98 - Prints all natural numbers from num to 98
*
* @num: The number to begin counting at
*/

void print_to_98(int num)
{
if (num <= 98)
{
while (num < 98)
printf("%d, ", num++);
printf("%d\n", num);
}
else
{
printf("%d, ", num--);
printf("%d\n", num);
}
}
