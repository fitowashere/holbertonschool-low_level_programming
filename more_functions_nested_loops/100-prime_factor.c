#include <stdio.h>
#include <math.h>

/**
 * main- gets input
 * Return: results
 */

int main(void)
{
	double i = 2;
	double n = 612852475143;

	while (i * i <= n)
	{
		if (fmod(n, i) != 0) /* modulo de i */
		{
			i++;
		}
		else
		{
			n /= i;
		}
	}
	printf("%.f\n", n);
	return (n);
}
