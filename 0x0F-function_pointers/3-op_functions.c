#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * op_add - return sum of tow integer
 * @a: first numb
 * @b: seconde numb
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return sub of tow integer
 * @a: first numb
 * @b: seconde numb
 * Return: the sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return mul of tow integer
 * @a: first numb
 * @b: seconde numb
 * Return: the mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return div of tow integer
 * @a: first numb
 * @b: seconde numb
 * Return: the div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
 * op_mod - return mod of tow integer
 * @a: first numb
 * @b: seconde numb
 * Return: the mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
