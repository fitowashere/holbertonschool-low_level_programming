#include <stdio.h>

/**
 * main- gets input
 * Return: results
 */

int main(void)
{
	int sum = 0;
	int a = 1, b = 2, temp;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		temp = a;
		a = b;
		b = temp + b;
	}

	printf("%d\n", sum);

	return (0);
}
