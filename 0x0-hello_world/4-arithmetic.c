#include<stdio.h>

/**
 * main - Arithmetic Operators in C
 *
 * Return: Always 0 (Success), non-zero (Failed)
 */
int main(void)
{
	int a = 21;
	int b = 10;
	int c;

	/*Addition Operator*/
	c = a + b;
	printf("Line 1 - Value of c is %d\n", c);

	/*Subtraction Operator*/
	c = a - b;
	printf("Line 2 - Value of c is %d\n", c);

	/*Mulitplication Operator*/
	c = a * b;
	printf("Line 3 - Value of c is %d\n", c);

	/*Division Operator*/
	c = a / b;
	printf("Line 4 - Value of c is %d\n", c);

	/*Modulus Operator-Remainder of an after integer division*/
	c = a % b;
	printf("Line 5 - Value of c is %d\n", c);

	/*Increment Operator-Increases integer value by one*/
	c = a++;
	printf("Line 6 - Value of c is %d\n", c);

	/*Decrement Operator-Decreases integer value by one*/
	c = a--;
	printf("Line 7 - Value of c is %d\n", c);
}
