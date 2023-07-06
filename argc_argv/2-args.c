#include "main.h"
#include <stdio.h>

/**
 * main- gets input
 * @argc: gets first input
 * @argv: gets string
 * Return: results
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		int i;

			for (i = 0; i < argc; i++)
			{
				printf("%s\n", argv[i]);
			}
	}
	return (0);
}
