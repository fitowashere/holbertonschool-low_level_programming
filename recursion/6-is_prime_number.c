#include "main.h"

/**
 *is_prime_number- gets input
 *@n: stores input in variable
 *Return: results
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return(findprimehelper(n, n / 2));
}

/**
 *findprimehelper- gets input
 *@n: stores first input
 *@x: stores second input
 *Return: results
 */

 int findprimehelper(int n, int x)
 {
 if ( x == 1)
 {
 return (1);
 }

 if (n % x == 0)
 {
 return (0);
 }

 return (findprimehelper(n, x-1));
 }
