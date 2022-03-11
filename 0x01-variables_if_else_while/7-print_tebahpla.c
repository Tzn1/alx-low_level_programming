#include <stdio.h>

/**
 * main- main block
 * Description: prints the alpahabet in reverse
 * Return: 0
 */

int main(void)
{
	char ch ='a'; 
	char l ='z';

	while (ch < l)
	{
		putchar(l);
			ch++;
	}
	putchar('\n');
	return (0);
}
