#include <stdio.h>
#include <stdlib.h>

/**
* main - function that prints the minimum number of coins
* @argc: The supplied number
* @argv: Arrays of pointers
*
* Return: If the number of arguments is not exactly 1 otherwise 0
*/
int main(int argc, char *argv[])
{
int cents, coins = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
		cents = atoi(argv[1]);

		while (cents > 0)
		{
		coins++;
{
		cents -= 25;
			continue;
}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
{
		cents -= 2;
		continue;
}
		cents--;
		}
		printf("%d\n", coins);
	return (0);
}