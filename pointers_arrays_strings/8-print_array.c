#include "main.h"
#include <stdio.h>

/**
 *print_array- gets users input
 *@a: stores first input
 *@n: stores second input
 */

void print_array(int *a, int n)
{
	int i = 0;
	while  (i < n)
	{
		printf("%d", a[i]);
		if (i < n--)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
