#include<stdarg.h>
#include"variadic_functions.h"
/**
 * sum_them_all - calculate the sum of all the parametres
 * @n: the number of args
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	int val;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		sum = sum + val;
	}
	return (sum);
}

