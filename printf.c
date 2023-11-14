#include "main.h"

/**
 * _printf - A function that produces output according to a format
 * @format: char string parameter
 *
 * Return: number of printed chars.
 */
int _printf(const char *format, ...)
{
	int n, print = 0, printc = 0, flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (n = 0; format && format[n] != '\0'; n++)
	{
		if (format[n] != '%')
		{
			buffer[buff_ind++] = format[n];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			 write(1, &format[n], 1);
			 printc++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &n);
			width = get_width(format, &n, list);
			precision = get_precision(format, &n, list);
			size = get_size(format, &n);
			++i;
			print = handle_print(format, &n, list, buffer,
					flags, width, precision, size);
			if (print == -1)
				return (-1);
			printc += print;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printc);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
