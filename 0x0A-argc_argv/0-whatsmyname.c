#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line
 * @argc: This counts the number of arguments
 * @argv: This is the value of the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);

	(void)argc; /*cast argc to void to suppress the unused variable*/

	return (0);
}
