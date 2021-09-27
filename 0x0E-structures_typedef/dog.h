
/**
 * struct dog - name of type
 * @name: name of dog
 * @age: age of dog
 * @owner : owner name
 * Description:  defines a new type
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
