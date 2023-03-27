#include "main.h"
/**
 * A function that returns the length of a string
 * @S: string
 * Return: lenght
 */
int strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
