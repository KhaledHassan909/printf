#include "main.h"
/**
 * handle_char - Function prints character
 *
 * Return: character
 */
void handle_char(va_list args)
{
	char value = va_arg(args, int);

	write(1, &value, 1);
}
