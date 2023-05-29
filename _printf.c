#include "main.h"

/**
 * _printf - This prints variables using format specifers
 * @format: This is a character string)
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int  x = 0, r_value = 0;
	va_list args;

	va_start(args, format);

	for ( ; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			_putchar(format[x]);
		}
		else if (format[x + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			x++;
		}
		else if (format[x + 1] == 's')
		{
			int my_val = _put_s(va_arg(args, char*));

			x++;
			r_value += (my_val - 1);
		}
		else if (format[x + 1] == '%')
		{
			_putchar('%');
			x++;
		}
		else if ((format[x + 1] == 'd') || (format[x + 1] == 'i'))
		{
			_get_int(va_arg(args, int));
			x++;
		}
		r_value += 1;
	}

	va_end(args);
	return (r_value);
}
