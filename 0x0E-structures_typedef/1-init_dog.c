#include "dog.h"

/* int_dog - function that initialize a variable of type struct dog
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
