#include "main.h"

/**
 *reverse_array- gets users input
 *@a: stores users input
 *@n: strores second input
 *Return: results
 */

void reverse_array(int *a, int n)
{
	int c = 0, e = n - 1, t;

	while (c < e)
	{
		t = a[c];
		a[c] = a[e];
		a[e] = t;
		c++;
		e--;
	}
}
