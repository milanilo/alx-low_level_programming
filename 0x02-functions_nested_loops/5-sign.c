#include<stdio.h>
#include"main.h"
/**
 * print_sign - print the sign of a number
 *
 * Return: 1 if success and 0 or -1 if not
 * @n: the number for input
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	} else
	{
		_putchar('-');
		return (-1);
	}
}

