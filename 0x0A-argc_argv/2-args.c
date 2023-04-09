#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives
 * @argc: This counts the arguments received
 * @argc: Value of the arguments passed
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
