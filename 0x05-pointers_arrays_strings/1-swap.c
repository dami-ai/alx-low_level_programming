#include "main.h"

/**
 * swap_int - swaps 2 integers using a pointer
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
return;
}
