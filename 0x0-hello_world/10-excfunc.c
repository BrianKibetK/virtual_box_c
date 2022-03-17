#include<stdio.h>

/**
 * main - exercises on functions
 *
 * Return: Always 0 (Success)
 */

int increment(int var)
{
	var = var + 1;
	return var;
}
int main(void)
{
	int num1;

	printf("Enter the first number: ");
	scanf("%d\n", &num1);

	int num2 = increment(num1);
	printf("Num1 is: %d\n", num1);
	printf("Num2 is: %d\n", num2);

	return (0);
}
