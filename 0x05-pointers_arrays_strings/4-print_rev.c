#include "main.h"
/**
* print_rev - Prints a string in reverse.
* @s: the string to be printed.
*
* Return: Nothing.
*/
void print_rev(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

while (len)
_putchar(s[--len]);

_putchar('\n');
}
