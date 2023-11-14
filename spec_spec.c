#include "main.h"
/**
 * print_perc - Prints a percent sign
 *
 * Return: Number of chars printed
 */
int print_perc()
{
	return (write(1, "%%", 1));
}
