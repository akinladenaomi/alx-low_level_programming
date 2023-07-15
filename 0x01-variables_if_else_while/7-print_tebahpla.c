#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints all the numbers of base 1i6
 * return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
