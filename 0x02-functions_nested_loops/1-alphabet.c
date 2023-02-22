#include "main.h"
/**
 * print_alphabet - function for printing alphabets in lower case
 *
 * return: returns 0 (Nothing per say but sucessful)
 */
void print_alphabet(void)
{
	char i;
	/* This is a for loop to print the alphabetsone at a time */
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
