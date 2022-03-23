#include<stdio.h>

/**
 * main - create and array of 10 integers
 * @i: integer
 * @j: integer
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*array n of 10 integers*/
	int n[10];
	int i;
	int j;

	/*initialize elements of array n to 0*/
	for  (i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}
	/*output each array element*/
	for (j = 0; j < 10; j++)
	{
		printf("Element [%d] = %d\n", j, n[j]);
	}
	return (0);
}
