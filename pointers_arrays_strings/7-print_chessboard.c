#include "main.h"

/**
 *print_chessboard- gets inputs
 *@a: first input
 *@8: second input
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar( a[i][j]);
		}
		_putchar(10);
	}
}
