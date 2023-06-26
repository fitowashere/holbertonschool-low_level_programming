#include<stdio.h>

/**
 * main- inicialized the program
 *Return: always returns 0
 */

int main(void)
{
	int  num;

	for (num = 0 ; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
