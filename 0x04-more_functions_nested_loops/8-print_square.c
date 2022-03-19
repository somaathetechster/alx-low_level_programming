#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: no return
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else if (size <= 0)
	{
		putchar('\n');
	}
}
