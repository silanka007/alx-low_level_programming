#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the length of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int idx = 0;
	int backIdx = n - 1;
	int newArr[n];

	while (idx < n)
	{
		newArr[idx] = a[backIdx];
		idx++;
		backIdx--;
	}

	int i;

	for (i = 0; i < n; i++)
		*(a + i) = *(newArr + i);
}
