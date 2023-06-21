#include<stdio.h>
#include"main.h"
/**
 * _islower - checks if a character c is lower
 *
 * c: character parametre for the function
 * Return: 1 if success and 0 of not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
		_putchar('\n');
	} else
	{
		return (0);
	}
}

