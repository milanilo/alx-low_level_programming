#include"main.h"
/**
 * _strspn - function name
 * @s: first argument
 * @accept: seconde agrument
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
