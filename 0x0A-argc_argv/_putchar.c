#include <stdio.h>
#include "main.h"

/**
 * _This is putchar.c header file-writing the character c to standard output
 * @c: This is the character to print 
 *
 * Return: On sucess 1.
 * On error, -1 should be returned then errno is set appropriately 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
