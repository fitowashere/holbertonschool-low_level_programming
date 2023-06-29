#include "main.h"
#include <string.h>

/**
 **_strcat- gets users input
 *@dest: stores first input
 *@srv: stores second input
 *Return: results
 */

char *_strcat(char *dest, char *src)
{

  int i = strlen(dest);

  for (i = 0; src[i] != '\0'; i++)
  {
	  dest[i] = src[i];
  }

  dest[i + strlen(src)] = '\0';

  return (dest);
}
