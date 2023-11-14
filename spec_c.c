#include "main.h"
/**
 * spec_c - Prints a char
 *
 * Return: Number of chars printed
 */
char spec_c(va_list list)
{
	char c;

	c = va_arg(list, int);
	write(1, &c, 1);
	
	return(1);
}
