#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		fputc(*str, stdout);
		str++;
	}
	fputc('\n', stdout);
}	
