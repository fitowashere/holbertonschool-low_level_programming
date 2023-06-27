#include "main.h"

/**
 *rev_string- gets users input
 *@s: stores users input
 */

void rev_string(char *s)
{
	int x = 0, y = 0, z = 0;
	char tmp[10];

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
