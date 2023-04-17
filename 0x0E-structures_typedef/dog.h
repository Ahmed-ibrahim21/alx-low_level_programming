#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name : the dog's name
 * @age : the dog's age
 * @owner : the name of the dog's owner
 */

struct dog
{
char *name;
char *owner;
float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
