#include <stdio.h>

/**
 * main- getes input
 * Return: resutls
 */

int main(void)
{
	int i = 2;
	double a = 1, b = 2, temp;

	printf("%.f, %.f, ", a, b);
	while (i < 50)
	{
		temp = a;
		a = b;
		b = temp + b;
		printf("%.f", b);
		if (i < 49)
			printf(",");
		if (i < 50)
			printf(" ");
		i++;
	}
	return (0);
}
