#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- gets inputs
 * @argc: stores int in a variable
 * @argv: stores string in a variable
 * Return: results
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc <= 1)
	{
		printf("0\n");
	}
	return (0);
}
