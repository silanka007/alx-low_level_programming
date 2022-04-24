#include "main.h"
/**
*swap_int - swaps two numbers
*
*@a: number 1
*@b: number 2
*/
void swap_int(int *a, int *b)
{
	int m = *a;
	int n = *b;
	*b = m;
	*a = n;
}
