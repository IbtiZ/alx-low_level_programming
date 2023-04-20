#include <stdio.h>
/**
 * main - A program using sizeof to print the size of various type
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("sizeof a char: %ld byte(s)\n", sizeof(char));
	printf("sizeof an int: %ld byte(s)\n", sizeof(int));
	printf("sizeof a long int: %ld byte(s)\n", sizeof(long int));
	printf("sizeof a lon long int: %ld byte(s)\n", sizeof(long long int));
	printf("sizeof a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
