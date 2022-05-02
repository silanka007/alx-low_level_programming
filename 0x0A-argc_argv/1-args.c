#include <stdio.h>

/**
 * main - prints the number of command line argument passed to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *arg[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
