#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a a string in reverse
 * @s: string to reverse
 * Return: Void
 */
void print_rev(char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
		l++;
	l--;
	for (; l >= 0; l--)
		_putchar(*(s + l));
	_putchar('\n');
}
