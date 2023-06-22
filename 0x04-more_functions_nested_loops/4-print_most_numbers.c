#include<stdio.h>
#include"main.h"
/**
 * print_most_numbers - print numbers btween 0 and 9 without 2 and 4
 * Return: no return it is void
 */
void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}

