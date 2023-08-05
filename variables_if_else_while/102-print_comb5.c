#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - gets input
 * Return: results
 */

int main(void)
{
	int i, x;

	for (i = 0; i < 100; i++)
	{
		for (x = i + 1; x < 100; x++)
		{
			if (i != x)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(32);
				putchar(x / 10 + 48);
				putchar(x % 10 + 48);

				if (i != 98 || x != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);

}
