#include<stdio.h>
#include"main.h"
/**
 * more_numbers - print 10 times number from 0 to 14
 * Return: no return it is void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int c;

		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar('1');
			}
		 _putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
	putchar('\n');
}

