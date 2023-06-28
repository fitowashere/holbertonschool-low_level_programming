#include "main.h"
#include "_putchar.c"
/**
 *print_array- gets users input
 *@a: stores first input
 *@n: stores second input
 */

void print_array(int *a, int n)
{
	int i = 0;
	while (a[i] <= n)
	{
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
		i++;
	}
}
