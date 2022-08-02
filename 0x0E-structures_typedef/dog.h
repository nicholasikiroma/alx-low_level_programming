#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Information about dogs
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
