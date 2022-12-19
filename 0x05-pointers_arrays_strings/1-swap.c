#include "main.h"
/**
* swap_int - a function that swaps the values of two ints.
* @a: first input interger pointer
* @b: second input interger pointer
*
* Return: Nothing
*/
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
