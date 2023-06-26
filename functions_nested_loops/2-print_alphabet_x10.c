#include "main.h"

/**
 * print_alphabet_x10- prints the alphabeth
 * Return: alphabet
 */

void print_alphabet_x10(void)
{
	int ch;
	int count = 1;

while (count <= 10)
{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	count++;

}
}

