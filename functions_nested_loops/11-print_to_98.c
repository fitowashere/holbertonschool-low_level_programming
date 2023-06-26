#include "main.h"
#include <stdio.h>

/**
 * print_to_98- gets user input
 * @n: stores the input
 * Return: returns result
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}

}
