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
    char str[2];

    str[0] = value;
    str[1] = '\0';

    write(1, str, 1);
}
