#include<stdio.h>
#include"main.h"
/**
 * _isalpha - checks if a character c is lower
 *
 * @c: character parametre for the function
 * Return: 1 if success and 0 of not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') or(c >= 'A' && c <= 'Z'))
	{
		return (1);
		_putchar('\n');
	} else
	{
		return (0);
	}
}

