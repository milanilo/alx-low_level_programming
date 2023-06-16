#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp_lower = 'a';
	char alp_upper = 'A';

	while (alp_lower <= 'z')
	{
		putchar(alp_lower);
		alp_lower++;
	}
	while (alp_upper <= 'Z')
	{
		putchar(alp_upper);
		alp_upper++;
	}
	putchar('\n');
	return (0);
}
