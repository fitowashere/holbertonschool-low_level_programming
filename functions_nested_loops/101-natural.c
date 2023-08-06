#include <stdio.h>

/**
 * main- gets input
 * Return: results
 */

int main(void)
{
	int i, results;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			results += i;
		}
	}
	printf("%d\n", results);
	return (0);

}
