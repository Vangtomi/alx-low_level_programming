#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - strings in here are digits
 * @str: array str
 *
 * Return: 1 if the string only contains digits, 0 otherwise
 */
int check_num(char *str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
	{
		return (0);
	}
	}
	return (1);
}

/**
 * main - a program that adds positive numbers.
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: always 0 (success), 1 on error
 */

int main(int argc, char **argv)
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
