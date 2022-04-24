#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the length of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}

// void reverse_array(int *a, int n)
// {
// 	int i;
// 	int idx = 0;
// 	int backIdx = n - 1;
// 	int *newArr = malloc(n * sizeof(int));

// 	while (idx < n)
// 	{
// 		newArr[idx] = a[backIdx];
// 		idx++;
// 		backIdx--;
// 	}

// 	for (i = 0; i < n; i++)
// 		*(a + i) = *(newArr + i);
// }
