#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59.
 *
 * Description: Function uses two nested loops to iterate over the hours
 * (0 to 23) and minutes (0 to 59) of a day, then prints each minute in the
 * format "HH:MM", followed by a newline character.
 */

void jack_bauer(void)
{

int hour, minute;

for (hour = 0; hour < 24; hour++)

{

for (minute = 0; minute < 60; minute++)

{

_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');

}
}
}


