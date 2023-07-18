#ifndef dog_h
#define dog_h
/**
 *struct dog- creats a struck
 *@name: gets the name of the dog
 *@age: gets age of the dog
 *@owner: gets the name of the owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
