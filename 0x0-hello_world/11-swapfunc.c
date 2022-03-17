#include<stdio.h>

/**
 * main - Swapping function called by reference
 *
 * Return: Always 0 (Success), non-zero (Failed)
 */
void swapnum(int *var1, int *var2)
{
	int tempnum;

	tempnum = *var1;
	*var1 = *var2;
	*var2 = tempnum;
}

int main(void)
{
	int num1 = 35;
	int num2 = 45;

	printf("Before Swapping: \n");
	printf("Num1 value is %d\n", num1);
	printf("Num2 value is %d\n", num2);

	swapnum(&num1, &num2);/*calling swap function*/

	printf("After swapping:\n");
	printf("Num1 value is %d\n", num1);
	printf("Num2 value is %d\n", num2);
	return (0);
}
