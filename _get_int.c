#include <stdarg.h>
#include "main.h"

/**
 * _get_int - This is a recusive function that
 * takes on an integer num as input
 * @num: This represents the integer
 * Return: Success
 */

void _get_int(int num)
{
	int x;

	if (num == 0)
		return;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	x = num / 10;

	_get_int(x);
	_putchar(num % 10 + '0');
}
