#include <stdio.h>

/**
 * main - prints the name of the program file
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
