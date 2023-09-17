#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int LowerCase = 'a';
	while (LowerCase <= 'z')
	{
		putchar(LowerCase);
		LowerCase += 1;
	}
	putchar('\n');
	return (0);
}
