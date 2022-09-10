#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 for sucess
 */
int main(void)
{
	int letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
