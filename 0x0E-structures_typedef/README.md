0x0E. C - Structures, typedef

0. new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

1.function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
2.function that prints a struct dog

Prototype: void print_dog(struct dog *d);
3.new type dog_t as a new name for the type struct dog.
4.function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
5.function that frees dogs.

Prototype: void free_dog(dog_t *d);
