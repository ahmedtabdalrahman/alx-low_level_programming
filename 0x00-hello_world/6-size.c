#include <stdio.h>
/**
 * main - Entry point
 *
 * discription: C program that prints the size of various types
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	printf("size of a char is: %lu.\n byte(s)"), (unsigned long)sizeof(char);
	printf("size of an int is: %lu.\n byte(s)"), (unsigned long)sizeof(int);
	printf("size of a long int is: %lu.\n byte(s)"), (unsigned long)sizeof(long int);
	printf("size of a long long int is: %lu.\n byte(s)"), (unsigned long)sizeof(long long int);
	printf("size of a float is: %lu.\n byte(s)"), (unsigned long)sizeof(float);
	return (0);
}
