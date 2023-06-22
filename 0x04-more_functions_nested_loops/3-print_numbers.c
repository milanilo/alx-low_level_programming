#include<stdio.h>
#include"main.h"
/**
 * print_numbers - print number from 0 to 9
 * Return: no return it is void
 */
void print_numbers(void)
{
	for (char i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}

