#include "main.h"
/**
 * _isdigit - check if parameter i a digit or character
 * @c: parameter
 * Return: 1 if it is a number and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
