#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -  creates a new dog
 *
 * @name: string value
 * @age: float value
 * @owner: string value
 * Return: a dog of type dog_t else NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
