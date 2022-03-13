#include<stdio.h>

/**
 * Main - If else, else if statements in C
 *
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	int age;

	printf("Please enter you age: ");
	/*The input is then stored in age*/
	scanf("%d\n", &age);
	if (age > 0 && age <= 12)
	{
		printf("You are in the age group of a child\n");
	}
	else if (age > 12 && age <= 19)
	{
		printf("You are a teenager\n");
	}
	else if (age > 19 && age <= 24)
	{
		printf("You are in the youth age group\n");
	}
	else if (age > 24 && age <= 64)
	{
		printf("You are in the adult age group\n");
	}
	else if (age > 64 && age <= 135)
	{
		printf("You are in the Seniors age group\n");
	}
	else if (age > 136)
	{
		printf("You've broken the world record of the oldest person alive!\n");
	}
	else
	{
		printf("Invalid entry please enter the right figure\n");
	}
	return (0);

}
