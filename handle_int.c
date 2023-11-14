#include "main.h"

/**
 * handle_int - a function that writes the str of an int to stdout.
 * @value: The integer to be converted and written.
 */
void handle_int(int value)
{
	char *num = _itoa(value); /* Converting int to str */

	write(1, num, _strlen(num));
	free(num);
}
