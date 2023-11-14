#include "main.h"

/**
 * _printf - A function that produces output according to a format
 * @format: char string parameter
 *
 * Return: number of printed chars.
 */
int _printf(const char *format, ...)
{
	unsigned int n = 0;
	const char *ptr = format;
       	va_list arg;
	va_start(arg, format);

	while (*ptr != '%')
	{
		if (*ptr != '%')
		{
			write (1, ptr, 1);
			n++;
		}
		else
		{
			ptr++;
			if(*ptr == 'c')
			{
				handle_char(args);
			}
		}
	}

	va_end(arg);

	return (n);
}
