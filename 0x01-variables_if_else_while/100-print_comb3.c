#include <stdio.h>
/**
 * main - ENtry point
 * Description: A program thar prints all possible different combinations
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (j = i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++);
		{
			putchar('0' + i);
			putchar('0' + j);
			
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				purchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
