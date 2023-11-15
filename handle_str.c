#include "main.h"
/**
 * handle_str - Function prints string
 *
 * Return: string
 */
void handle_str(va_list args)
{
	char *value = va_arg(args, char *);
	
	
	write(1, value, _strlen(value));
}
