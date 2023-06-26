#include<stdio.h>

/**
 * main- inicialized the program
 *Return: always returns 0
 */

int main(void)
{
	int  num;
	char letters;

	for (num = 0 ; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);

	putchar('\n');
	return (0);
}
