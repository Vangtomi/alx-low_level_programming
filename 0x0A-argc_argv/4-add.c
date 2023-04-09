#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - strings in here are digits
 * @str: array str
 *
 * Return: Always 0 (success)
 */
int check_num(cha *str)
{
	/*declaring variable*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count strings*/

	{
		if (!isfigit(str[count])) /*check if str there are digits*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - a program that adds positive numbers.
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variable*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string
							  to int*/
			sum += str_to_int;
		}
		/*Condition if one of the number contains symbols that 
		 * are not digits*/
		else
		{printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/

	retun (0);
}
