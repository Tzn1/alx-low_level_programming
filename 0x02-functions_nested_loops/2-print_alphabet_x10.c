#include "main.h"

/**
 * main: entry point
 * Description: prints alphabet 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;
	while (count++ <=10)
	{ 
		for (alpha = 'a' ; alpha <='z'; alpha++)
			_putchar(alpha);
		-putchar('\n');
	}
}
