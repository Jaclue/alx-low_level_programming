#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("size of a char: %1u byte(s)\n", sizeof(acharacter));
	printf("size of an int: %1u byte(s)\n", sizeof(ainteger))
;
	printf("size of a long int: %1u byte(s)\n", sizeof(along));
	printf("size of a long long int: %1u byte(s)\n", sizeof(alonglong));
	printf("size of a float: %1u byte(s)\n", sizeof(afloat));

	return (0);
}


