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
	/* declaration of variables*/
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	/*printing statement*/
	printf("size of a char is: %lu.\n byte(s)", (unsigned long)sizeof(c);
	printf("size of an int is: %lu.\n byte(s)", (unsigned long)sizeof(i);
	printf("size of a long int is: %lu.\n byte(s)", (unsigned long)sizeof(li);
	printf("size of a long long int is: %lu.\n byte(s)", (unsigned long)sizeof(lli);
	printf("size of a float is: %lu.\n byte(s)", (unsigned long)sizeof(f);
	return (0);
}
