#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nb = 0;

	while (nb <= 9)
	{
		putchar(nb + '0');
		if (nb != 9)
		{
			putchar(',');
		}
		putchar(' ');
		nb++;
	}
	putchar('\n');
	return (0);
}

