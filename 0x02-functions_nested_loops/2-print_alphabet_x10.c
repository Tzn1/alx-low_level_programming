#include "main.h"

/**
 * main: entry point
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (count++ <= 9)
	{
		for (alpha = 'a' ; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
