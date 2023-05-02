#include "main.h"
#include <stdio.h>
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
	
		printf("%c", s[i]);
		i--;
	}
	printf("\n");
}
