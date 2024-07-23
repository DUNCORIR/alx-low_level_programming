#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's information
 * @name: first description
 * @age: second description
 * @owner: third description
 *
 * Description: Long described
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - Function that initializes dog structure.
 * @d: points to structure of dog
 * @age: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: long described
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
