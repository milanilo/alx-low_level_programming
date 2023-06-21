#include<stdio.h>
/**
 * _islower - checks if a character c is lower
 *
 * Return: 1 if success and 0 of not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}

