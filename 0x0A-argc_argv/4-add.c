#include <stdlib.h>
#include <stdio.h>

/**
 * main - add up positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int val;
	int i;

	for (i = 1; i < argc; i++)
	{
		val = atoi(argv[i]);
		if (val > 0)
		{
			result += val;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);

	return (0);
}
