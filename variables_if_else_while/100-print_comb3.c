#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - gets input
 * Return: null
 */

int main(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			putchar(i + '0');
			putchar(x + '0');

			if (x < 10)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	if (x == 10)
	{
		putchar('1' + 0);
		putchar('0' + 0);
		putchar('0' + 0);
		putchar(10);
	}
	return (0);
}

