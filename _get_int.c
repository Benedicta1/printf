#include "main.h"

/**
 * _get_int - This is a recusive function that
 * takes on an integer num as input
 * @num: This represents the integer
 * Return: Success
 */

void _get_int(int num)
{
	int x, r_val;

	if (num == 0)
		return;

	x = num / 10;

	_get_int(x);
	_putchar(num % 10 + '0');

	return (0);
}

