#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * @argc: inputs numbers
 * @argv: inputs
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

