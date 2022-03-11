#include <stdio.h>

/**
 * main- main block
 * Description: prints the alpahabet in reverse
 * Return: 0
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
			ch--;
	}
	putchar('\n');
	return (0);
}
