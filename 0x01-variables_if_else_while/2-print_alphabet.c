#include <stdio.h>

/**
 *main - Entry point.
 *
 *Return: 0 (means no error)
 **/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
