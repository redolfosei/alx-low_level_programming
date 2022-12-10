
#include <stdio.h>

/**
 * main - prints the letters of the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
