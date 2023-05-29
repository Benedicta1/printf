#include "main.h"

/**
 * _putchar - This prints out the first character
 * @z: This represents the character
 * Return: Success 0
 */

int _putchar(char z)
{
	return (write(1, &z, 1));
}
