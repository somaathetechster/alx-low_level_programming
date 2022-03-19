#include "main.h"
#include <stdio.h>
/**
 * print_line - print a line
 * @n: numbers of straight lines
 * Return: Always 0
 */
void print_line(int n)
{
	int l;

	for (l = 1; l <= n; l++)
	{
		putchar(95);
	}
		putchar('\n');
}
