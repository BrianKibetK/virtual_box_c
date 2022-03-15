#include<stdio.h>

/**
 * main - Nested while loop to make a table in c
 *
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	/*Declare Variables*/
	int i = 0;
	int j;

	while (i < 5)
	{
		/*In while loop, variable is initialised before the loop*/
		j = 0;
		while (j < 3)
		{
			printf("2 ");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
