#include "main.h"

/**
 * handle_format - Function that handles different format specifiers
 * @ptr: pointer to the current character in the format string
 * @args: list of arguments
 * @len: pointer to the length of the printed string
 */
void handle_format(const char *ptr, va_list args, unsigned int *len)
{
	int str_len = 0;

	if (*ptr == 'c')
	{
		handle_char(args);
		(*len)++;
	}
	else if (*ptr == 's')
	{
		while (ptr[str_len] != '\0')
		{
			str_len++;
		}
		handle_str(args);
		*len += str_len;
	}
	else if (*ptr == '%')
	{
		handle_percent();
		(*len)++;
	}
	else if (*ptr == 'd' || *ptr == 'i')
	{
		int value = va_arg(args, int);

		handle_int(value);
	}
}

/**
 * _printf - Function that produce output according to a format
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

	if (format == NULL)
	{
		return (-1);
	}
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

			if (*ptr == '\0')
			{
				break;
			}
			handle_format(ptr, args, &len);
		}
		ptr++;
	}

	va_end(args);
	return (len);
}
