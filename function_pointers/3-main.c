#include "3-calc.h"

/**
 *main- gets users input
 *@argc: stores first input
 *@argv: stores second input
 *Return: results
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);

	/*makes sure it has the correct entry */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/*gets input an converts it to int*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/*check if the function is null*/
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((atoi(argv[2]) == atoi("/") || atoi(argv[2]) == atoi("%")) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(argv[2]);
	printf("%d\n", op_func(num1, num2));
	return (0);
}
