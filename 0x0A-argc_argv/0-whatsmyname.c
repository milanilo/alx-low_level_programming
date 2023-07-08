#include<stdio.h>
/**
 * main - Entry point
 * @argc: number of inputs by user
 * @argv: the actuals caracters entred by user
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}

