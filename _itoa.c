#include "main.h"

/**
 * get_num_length - Calculates the length of a number.
 * @num: The number to calculate the length of.
 *
 * Return: The length of the number.
 */
int get_num_length(int num)
{
	int len = 0;
	int temp = num;

	while (temp != 0)
	{
		temp /= 10;
		len++;
	}

	return (len);
}

/**
 * handle_negative - Handles negative numbers.
 * @num: The number to handle.
 * @is_negative: A pointer to a flag indicating if the number is negative.
 */
void handle_negative(int *num, int *is_negative)
{
	if (*num < 0)
	{
		*is_negative = 1; /* Flag for -ve numbers */
		*num = -*num;      /* Make the number positive for easier handling */
	}
}

/**
 * _itoa - Converts an integer to a string.
 * @num: The integer to be converted.
 *
 * Return: A pointer to the resulting string.
 */
char *_itoa(int num)
{
	int len = get_num_length(num);
	int is_negative = 0;
	char *str, *start;

	handle_negative(&num, &is_negative);

	str = malloc(len + is_negative + 1);
	if (str == NULL)
		return (NULL);

	start = str;
	str += len + is_negative;
	*str = '\0';

	if (num == 0)
	{
		str--;
		*str = '0';
		return (start);
	}

	str--;

	while (num > 0)
	{
		int remain = num % 10;
		*str = remain + '0';
		num /= 10;
		if (num > 0)
			--str;
	}

	if (is_negative)
		*start = '-';

	return (start);
}
