#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 Success
 * @argc: number of inputs
 * @argv: inputs
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}

