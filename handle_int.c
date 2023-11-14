#include "main.h"

/**
 * handle_int - Handles an integer value.
 * @value: The integer value to be handled.
 */
void handle_int(int value)
{
	char *num = _itoa(value); /* Converting int to str */
	write(1, num, _strlen(num));
	free(num);
}
