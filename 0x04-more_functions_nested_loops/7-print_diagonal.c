#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal
 * @n: input value
 *
 * Description: draws a diagonal line on the terminal
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int count = 0, size;

	if (n > 0)
	{
	while (count < n)
	{
	for (size = 0; size < count; size++)
	{
	putchar(' ');
	}
	putchar('\\');
	putchar('\n');
	count++;
	}
	}
	else
	{
		putchar('\n');
	}
}
