#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	for (count = 0; count < 10; count++)
	{
		for (alpha = 'a' ; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
