#include <stdio.h>
/**
 * main - A program using sizeof to print the size of various type
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("sizeof a char: %zu byte(s)\n", sizeof(char));
	printf("sizeof an int: %zu byte(s)\n", sizeof(int));
	printf("sizeof a long int: %zu byte(s)\n", sizeof(long int));
	printf("sizeof a lon long int: %zu byte(s)\n", sizeof(long long int));
	printf("sizeof a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
