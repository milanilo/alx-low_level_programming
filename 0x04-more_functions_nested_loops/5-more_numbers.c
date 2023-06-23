#include<stdio.h>
#include"main.h"
/**
 * more_numbers - print 10 times number from 0 to 14
 * Return: no return it is void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int c = 0;

		while (c <= 14)
		{
			if (c >= 10)
			{
				_putchar('1');
			}
		 _putchar(c % 10 + '0');
		 c++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

