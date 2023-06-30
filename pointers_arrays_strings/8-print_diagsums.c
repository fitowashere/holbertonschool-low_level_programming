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

	for (i = 0; i < size; i++)
	{
		i1 += a[i*size + 1];
		i2 += a[i*size + (size -1 - i)];
	}
	printf("%d, %d\n" i1, i2);
}




}
