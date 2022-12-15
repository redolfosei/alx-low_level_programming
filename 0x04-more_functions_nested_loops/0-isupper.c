#include "main.h"

/**
* _isupper - This check the character is it's upper case or not
* @c: The character in question
*
* Return: 1 is the character is upper, or 0 if it's not
*/

int _isupper(int c)
{
  if(c >= 'A' && c <= 'Z')
    return (1);
  else
    return (0);
}
