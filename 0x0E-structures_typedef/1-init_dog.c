#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 *
 * @d: pointer of type struct dog
 * @name: string value
 * @age: float value
 * @owner: string value
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
