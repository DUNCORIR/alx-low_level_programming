#include "dog.h"

/** init_dog - function that initialize a variable of type struct dog 
 * @name: Name of dog.
 * @d: Poits to the dog structure
 * @age: Age of dog.
 * @owner: Name of owner.
 *
 * Description: Function that will initialize struct dog variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
