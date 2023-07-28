#ifndef DOG_H
#define DOG_H

/**
 * struct dog - sfhjf
 *
 * @name: sfhj
 *
 * @age: shfj
 *
 * @owner: sjh
 *
 * Description: shfjf
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - fkd
 */
typedef struct dog dog_t;
#endif
