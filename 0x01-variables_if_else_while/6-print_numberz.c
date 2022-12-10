#include <stdio.h>
/**
 * main - prints the digits of 0-9
 *
 * Return: 0
 */

int main(void)
{
/*Declarations*/
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
	/*putchar(digit);*/
	putchar(digit + '0');

	}
	putchar('\n');
	return (0);
}
