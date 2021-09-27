#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  initialize a variable of type struct dog
 *
 * @d: pointer of type struct dog
*/


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
