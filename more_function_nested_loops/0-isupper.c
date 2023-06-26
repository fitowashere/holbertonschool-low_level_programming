#include "main.h"

/**
 * isupper- gets users input
 * @c: stores users input in c
 * Return: result
 */

int _isupper(int c){
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
