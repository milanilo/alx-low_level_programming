#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nb = 0;

	while (nb < 10)
	{
		putchar(nb + '0');
		nb++;
	}
	putchar('\n');
	return (0);
}

