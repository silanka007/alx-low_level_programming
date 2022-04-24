#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the length of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int idx = 0;
	int backIdx = n - 1;
	int newArr[n];

	while (idx < n)
	{
		newArr[idx] = a[backIdx];
		idx++;
		backIdx--;
	}

	for (i = 0; i < n; i++)
		*(a + i) = *(newArr + i);
}
