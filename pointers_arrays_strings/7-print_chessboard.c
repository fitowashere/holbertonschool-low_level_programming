#include "main.h"

/**
 *print_chessboard- gets inputs
 *@a: first input
 *@8: second input
 */
void print_chessboard(char (*a)[8])
{

for (int i = 0; i < 8; i++)
{
        for (int j = 0; j < 8; j++)
	   	{
            printf("%c ", a[i][j]);
        }
        printf("\n");
}
