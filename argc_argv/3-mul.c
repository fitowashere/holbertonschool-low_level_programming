#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- gets input
 * @argc: stores int input in variable
 * @argv: stores string input in variable
 * Return: results
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	 num1 = atoi(argv[1]);
	 num2 = atoi(argv[2]);
	 mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}

