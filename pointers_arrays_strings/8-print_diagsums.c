#include "main.h"
#include <stdio.h>

/**
 *print_diagsums- gets inputs
 *@a: stores first input
 *@size: gets the size of the array
 */

void print_diagsums(int *a, int size)
{

	int i, i1, i2;

	for (i = 0; i < (size * size); i = (i + size + 1))
	{
		i1 = i1 + a[i];
	}
	for (i = size - 1; i < (size * size - 1); i = (i + size - 1))
	{
		i2 = i2 + a[i];
	}
	printf("%d, %d\n", i1, i2);
}
