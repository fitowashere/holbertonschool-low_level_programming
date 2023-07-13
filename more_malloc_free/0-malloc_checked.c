#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *malloc_checked- gets input
 *@b: stores positive input
 *Return: results
 */

void *malloc_checked(unsigned int b)
{

void *check = malloc(b);

if (check == NULL)
{
	exit(98);
}
return (check);


}
