#include "main.h"
#include <stdio.h>

/**
 * more_numbers - more numbers
 *
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: Always (0)
 */

void more_numbers(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
	for (n = 0; i <= 14; i++)
	{
	if (i >= 10)
	{
	putchar((i / 10) + '0');
	}
	putchar((i % 10) + '0');
	}
	putchar('\n');
	}
}
