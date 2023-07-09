#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * @argc: number of inputs
 * @argv: inputs
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *ipt = argv[1];
			int j = 0;
			sum += atoi(argv[i]);	
			while (ipt[j])
			{
				if (!isdigit(ipt[j]))
				{
					printf("error\n");
					return (1);
					break;
				}
				j++;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

