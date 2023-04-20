#include <stdio.h>
/**
 * main - A program using sizeof to print the size of various type
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("sizeof a char: %u byte(s)\n", sizeof(char));
	printf("sizeof an int: %u byte(s)\n", sizeof(int));
	printf("sizeof a long int: %u byte(s)\n", sizeof(long int));
	printf("sizeof a lon long int: %u byte(s)\n", sizeof(long long int));
	printf("sizeof a float: %u byte(s)\n", sizeof(float));
	return (0);
}
