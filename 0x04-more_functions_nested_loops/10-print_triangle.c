#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of a triangle
 */
void print_triangle(int size)
{
	int s, n;

	if (size <= 0)
	{
		putchar ('\n');
	}
	n = 0;
	while (n < size)
	{
		s = (size - 1);
		while (s > n)
		{
			putchar (' ');
			s--;
		}
		s = 0;
		while (s <= n)
		{
			putchar ('#');
			s++;
		}
		putchar ('\n');
		n++;
	}
}
