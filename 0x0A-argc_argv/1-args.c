#include <stdio.h>
#include "main.h"

/**
 * main -  program that prints the number of arguments passed into it.
 * @argc: number of the argument
 * @argv: The array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
