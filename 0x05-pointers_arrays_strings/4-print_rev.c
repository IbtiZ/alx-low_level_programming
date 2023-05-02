#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = strlen(s);
	char rev[len+1];

	for (int i = 0; i < len; i++)
	{
		rev[i] = s[len-i-1];
	}
	rev[len] = '\0';
	printf("%s\n", rev);
}
