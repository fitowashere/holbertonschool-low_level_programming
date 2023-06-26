#include "main.h"
/**
 * jack_bauer- gets users input
 * Return: results;
 */

void jack_bauer(void)
{

	int hours, minutes, seconds;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 6; minutes++)
		{
			for (seconds = 0; seconds < 10; seconds++)
			{
				_putchar((hours / 10) + '0');
				_putchar((hours % 10) + '0');
				_putchar(58);
				_putchar(minutes + '0');
				_putchar(seconds + '0');
				_putchar('\n');
			}
			seconds = 0;
		}
		minutes = 0;
	}

}
