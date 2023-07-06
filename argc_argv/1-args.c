#include "main.h"
#include <stdio.h>

/**
 *main- gets input
 *@argc: stores first input
 *@argv: stores second input
 *Return: results
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; *argv; i++, argv++)
		;
		printf("%d\n", argc - 1);

	return (0);
}
