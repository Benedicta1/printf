#include "main.h"

/**
 * _my_puts - This prints a string
 * @string: This is the string character
 * Return: Success 0
 */

int _my_puts(char *string)
{
	int x = 0, r_val = 0;

	if (string)
	{
		while (string[x] != '\0')
		{
			_putchar(string[x]);
			r_val += 1;
			x++;
		}
	}
	_putchar('\n');

	return (r_val);
}
