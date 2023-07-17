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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
