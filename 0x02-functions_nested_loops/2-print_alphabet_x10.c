#include "main.h"

/**
* _islower - Check code
*
* Description: function prints alphabets in lowercase and return a result
*
* Return: 1 if is lowercase or 0 if is uppercase
*/

int _islower(int c)
{
char r;
int isLower = 0;

for (r = 'a'; r <= 'z'; r++)
{
if (r == c)
{
isLower = 1;
}
}
return (isLower);
}
