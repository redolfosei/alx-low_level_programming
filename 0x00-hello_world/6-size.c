#include <stdio.h>

/**
** main - function begins
**
** Return: 0
**/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char: %ld byte(s)\n", sizeof(d));
printf("Size of an int: %ld byte(s)\n", sizeof(a));
printf("Size of a long int: %ld byte(s)", sizeof(b));
printf("Size of a long long int: %ld byte(s)", sizeof(c));
printf("Size of a float: %ld byte(s)", sizeof(f));
return (0);
}
