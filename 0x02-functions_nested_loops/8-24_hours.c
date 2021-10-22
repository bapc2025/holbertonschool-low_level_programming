#include "main.c"
/**
 * jack_bauer - prints all minutes of the the day.
 * @void: first int to add
 */

void jack_beuer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((main / 10) + '0');
			_putchar((main % 10) + '0');
			_putchar('\n');
		}
	}
}
