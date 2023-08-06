#include <stdio.h>

/**
 * main- gets input
 * Return: results
*/

int main(void)
{
     int a = 1, b = 2, temp;
    int sum = 2; /* Start with the initial sum of 2 */

    printf("%d, %d, ", a, b);

    while (sum + b <= 4000000) {
        temp = a + b;
        sum += temp;
        printf("%d, ", temp);
        a = b;
        b = temp;
    }
    return (0);
}