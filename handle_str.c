#include "main.h"
/**
 * handle_str - Function prints string
 *
 * @args: List of char args.
 * Return: string
 */
void handle_str(va_list args)
{
	char *value;

	value = va_arg(args, char *);
	write(1, value, _strlen(value));
}
