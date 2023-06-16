#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	char apl_lower = 'a';

	while (apl_lower <= 'z')
	{
		if (apl_lower == 'e' || apl_lower == 'q')
		{
			apl_lower = apl_lower + 1;
		}
		putchar(apl_lower);
		apl_lower++;
	}
	putchar('\n');
	return (0);
}

