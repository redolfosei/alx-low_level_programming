#include <stdio.h>
/**
 * print_sign - analyse a number if is positive or not
 * @n:is the value analysed
 * Return: is the status code
 **/

int print_sign(int n)
{
int value;
if (n > 0)
{
value = 1;
printf("+");
}
else if (n == 0)
{
value = 0;
printf("0");
}
else if (n < 0)
{
value = -1;
printf("-");
}
return (value);

}
