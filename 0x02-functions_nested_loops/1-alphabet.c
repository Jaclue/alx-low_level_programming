#include "main.h"

/**
 * print_alphabet - check the code for Holberton School students.
 * Description: Prints the alphabet with _putcha
 * Return: Always 0 for success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
