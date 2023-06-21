#include<stdio.h>
#include"main.h"
/**
 *  _abs - return the absolute value of a number
 *
 *  Return: always positive number
 *  @n: the number checked
 */
int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		abs = n * -1;
	} else if (n > 0)
	{
		abs = n;
	} else
	{
		abs = 0;
	}
	return (abs);
}

