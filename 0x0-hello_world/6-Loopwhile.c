#include<stdio.h>

/**
 * main - While loop
 *
 * Return: Always 0 (Succuess), non-zero (Failed)
 */
int main(void)
{
	/*Declare a variable*/
	int a;

	/*Input Required*/
	printf("Please enter a random number(Number<20): ");
	scanf("%d\n", &a);

	/*While loop execution*/
	while (a < 20)
	{
	printf("The value is: %d\n", a);
	a++;
	}
	return (0);

}
