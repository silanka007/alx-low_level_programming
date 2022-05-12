#include <stdio.h>
#include "dog.h"

void print_str(char *key, char *val);
void print_float(char *key, float val);

/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		print_str("name", d->name);
		print_float("age", d->age);
		print_str("owner", d->owner);
	}
}

/**
 * print_str - prints one prop
 * @key: the props name
 * @val: the props value
 * Return: void
 */
void print_str(char *key, char *val)
{
	if (val == NULL)
		printf("%s: (nil)\n", key);
	else
		printf("%s: %s\n", key, val);
}


/**
 * print_int - prints one prop
 * @key: the props name
 * @val: the props value
 * Return: void
 */
void print_float(char *key, float val)
{
	if (!val)
		printf("%s: (nil)\n", key);
	else
		printf("%s: %f\n", key, val);
}

