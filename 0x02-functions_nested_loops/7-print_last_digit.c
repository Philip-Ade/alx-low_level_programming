#include "main.h"
/**
 * print_last_digits - prints last digits
 * @i: function parameter
 * Return: k
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
