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

	for (i = 0; i < 9; i++)
	{
		for (x = i + 1; x < 10; x++)
		{
			if (i != x)
			{
				putchar(i + 48);
				putchar(x + 48);

				if (i != 8 || x != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	return (0);

}
