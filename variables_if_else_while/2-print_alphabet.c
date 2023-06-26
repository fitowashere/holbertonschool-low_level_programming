#include<stdio.h>

/**
 *main- inicialized the program makes a list of character to make the alphabet
 *
 *Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
