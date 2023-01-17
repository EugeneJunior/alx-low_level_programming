#ifndef DOG_H
#define DOG_H
/**
 * struct dog -  declares a new type dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 */
struct dog
{
	char *name, *owner;

	float age;
};
/**
 *struct dog_t - declares a new type dog_t
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 */
struct dog_t
{
	char *name, *owner;

	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
