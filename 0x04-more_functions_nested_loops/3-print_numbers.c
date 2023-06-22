#include<stdio.h>
#include"main.h"
/**
 * print_numbers - print number from 0 to 9
 * Return: no return it is void
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

