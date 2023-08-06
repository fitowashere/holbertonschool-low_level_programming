#include <stdio.h>

/**
 * main- getes input
 * Return: resutls
 */

int main(void)
{
	int i = 0;
	double a = 1, b = 2, temp;

	printf("%.f, %.f, ", a, b);
	while (i < 51)
	{
		temp = a;
		a = b;
		b = temp + b;
		printf("%.f, ", b);
		i++;
	}
	return (0);
}
