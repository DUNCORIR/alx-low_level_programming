#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Structure is used to store information about a dog.
 * it is for record purposes.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - A typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * init_dog - Function that initializes dog structure.
 * @d: points to structure of dog
 * @age: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: The function takes pointer to a struct dog,
 * initializes its members with provided values then assigns
 * name, age, and owner to members of struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 *  * print_dog - prints a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: The function prints the details of a struct dog. If
 * any member of the struct is NULL, it prints (nil) instead of the
 * member's value. If the pointer to the struct dog is NULL, it does
 * nothing.
 */

void print_dog(struct dog *d);
/**
 * print_dog - Function that prints a struct dog
 * @d: pointer to the dog structure
 *
 * Description: The function will print the details of a struct dog.
 * If an element of d is NULL, print (nil) instead of this element.
 *  (if name is NULL, print Name: (nil)).
 *  If d is NULL print nothing.
 */

#endif /* DOG_H */
