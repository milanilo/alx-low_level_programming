#include<stdio.h>
#include"main.h"
/**
 * _isdigit - check for digits between 0 and 9
 * @c: digit cheked
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
		_putchar('\n');
	} else
	{
		return (0);
	}
}

