#include "main.h"

/**
 * _put_s - To print the first char to a string
 * @string: A collection of characters
 * Return: Success
 */

int _put_s(char *string)
{
	int bg = 0, r_val = 0;

	if (string)
	{
		while (string[bg] != '\0')
		{
			_putchar(string[bg]);
			r_val += 1;
			bg++;
		}
	}
	return (r_val);
}
