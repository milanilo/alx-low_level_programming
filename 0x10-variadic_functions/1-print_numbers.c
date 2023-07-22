#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include"variadic_functions.h"
/**
 * print_numbers - print a serie of numbers
 * @separator: separe the numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int val;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		printf("%d", val);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

