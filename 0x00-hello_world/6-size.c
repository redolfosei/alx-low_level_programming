#include <stdio.h>

/**
** main - function begins
**
** Return: 0
**/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;

printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)", sizeof(li));
printf("Size of a long long int: %ld byte(s)", sizeof(lli));
printf("Size of a float: %ld byte(s)", sizeof(f));
return (0);
}
