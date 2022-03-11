#include<stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	int int_type;
	char chartype;
	short short_type;
	long longtype;
	float float_type;

	printf("Size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of a short: %zu byte(s)\n", sizeof(short_type));
	printf("Size of a long: %zu byte(s)\n", sizeof(longtype));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));
	return (0);
}
