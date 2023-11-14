#include "main.h"
/**
 * printf - Function that produce output according to a format
 * @format: parameter
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int len = 0;
	const char *ptr = format;

	va_start(args, format);
	while (*ptr != '\0')
	{
		if (*ptr != '%')
		{
			write(1, ptr, 1);
			len++;
		}
		else
		{
			ptr++;
			if (*ptr == 'c')
			{
				handle_char(args);
			}
			else if (*ptr == 's')
			{
				handle_str(args);
			}
			else if (*ptr == '%')
			{
				handle_percent();
				len++;
			}
			else if (*ptr == 'd' || *ptr == 'i')
			{
				int value = va_arg(args, int);

				handle_int(value);
			}
		}
		ptr++;
	}

	va_end(args);
	return (len);
}
