#include "dog.h"

/** init_dog - function that initialize a variable of type struct dog 
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Name of owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
