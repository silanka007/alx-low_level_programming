#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog_t
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}

