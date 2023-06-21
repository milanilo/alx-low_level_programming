#include<stdio.h>
#include"main.h"
/**
 * print_last_digit - print the last of a number
 *
 * @n: number entred
 *
 * Return: Always the last value of the number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}

