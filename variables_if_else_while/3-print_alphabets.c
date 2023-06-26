#include <stdio.h>

/**
 * main- initialize the function as void
 * Return: the results first lower then upper case
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);

		if (ch == 'z')
		{
			char CH;

			for (CH = 'A'; CH <= 'Z'; CH++)
				putchar(CH);
		}
	}
	putchar('\n');
	return (0);
}
