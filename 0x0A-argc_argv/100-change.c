#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number of coins
 *  make change for an amount of money.
 *  @argc: number of areguments
 *  @argv: arrays of argument
 *
 *  Return: 0 for success and 1 for error
 */
int main(int argc; char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
