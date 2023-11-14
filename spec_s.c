#include "main.h"
/**
 * print_s - Prints a string
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 *
 * Return: Number of chars printed
 */
int print_s(va_list list)
{
	char i;
       
	i = va_arg(list, int);
	write(1, &i, 1);
	
	return(1);
}
