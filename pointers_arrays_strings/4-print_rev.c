#include "main.h"

/**
 *print_rev- gets users input
 *@s: stores users input
 */

void print_rev(char *s)
{
	int x = 0, y = 0, z = 0;

	char tmp[15];

	while (s[x] != '\0')
	{
		_putchar(s[x]);
		x++;
		z++;
		if (s[x] == '\0')
		{
			while (z != 0)
			{
				tmp[y] = s[z - 1];
				_putchar(tmp[y]);
				y++;
				z--;
			}
		}
	}
	_putchar(10);
}