#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_strings - print a list of strings
 * @separator: separe the strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *val;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(args, char *);
		if (val == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", val);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
