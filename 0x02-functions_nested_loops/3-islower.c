#include "main.h"

/**
 * _islower - returns 1 if lowercase alphabet and 0 otherwise
 * @c: letter being tested
 * Return: 0 for uppercase, 1 for lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
