#include "main.h"

/**
* _isdigit - Gives 1 as result if c is a digit
* @c: The number to be checked
*
* Return: Returns 1 is c is digit or 0 otherwise
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
