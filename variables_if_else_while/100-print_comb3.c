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

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			putchar(i + 48);
			putchar(x + 48);

			if (x < 10)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	/*if (x == 10)
	*{
	*	putchar(49, 48, 48);
	*}
    */
	return (0);
}

