#include "main.h"
#include <stdio.h>

/**
 *main- gets inputs
 *@argc: gets first input
 *@argv: gets string inputs
 *Return: results
 */

int main( int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
