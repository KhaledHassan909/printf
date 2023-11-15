#include "main.h"
/**
 * handle_char - Function prints character
 *
 * @args: List of args char to be passed.
 * Return: character
 */
void handle_char(va_list args)
{
	char value = va_arg(args, int);

	write(1, &value, 1);
}
