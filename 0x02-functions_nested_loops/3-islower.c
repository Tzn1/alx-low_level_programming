#include "main.h"

/**
 * main- enrty point
 * _islower - a function that checks for lowercase character
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
