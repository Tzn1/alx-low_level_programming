#include "main.h"

/**
 * main- entry point
 * Description: prints the alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	-putchar('\n');
}
