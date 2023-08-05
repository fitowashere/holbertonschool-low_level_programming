#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - gets input
 * Return: results
 */

int main(void)
{
	int i, x, y;

	for (i = 0; i < 8; i++)
	{
		for (x = i + 1; x < 9; x++)
		{
			for (y = x + 1; y < 10; y++)
			{

				if (i != x)
				{
					putchar(i + 48);
					putchar(x + 48);
					putchar(y + 48);

					if (i != 7 || x != 8 || y != 9)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);

}
