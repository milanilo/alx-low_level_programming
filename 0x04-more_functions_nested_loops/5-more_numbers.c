#include<stdio.h>
#include"main.h"
/**
 * more_numbers - print 10 times number from 0 to 14
 * Return: no return it is void
 */
void more_numbers(void)
{
	char c = '0';
	char i = '0';

	while (i < '10')
	{
		while (c <= '14')
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

