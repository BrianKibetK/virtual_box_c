#include<stdio.h>

/**
 * main - code illustrating how pointers are used
 *
 * Return: 0 Success
 */

int main(void)
{

	int var = 20;
	/*Pointer variable declaration*/
	int *ip;

	/*Store address of var in pointer*/
	ip = &var;
	printf("Address of var variable: %x\n", &var);
	/*Address stored in ip variable*/
	printf("Address stored in ip variable: %x\n", ip);
	/*Access the value using pointer*/
	printf("Value of *ip variable: %d\n", *ip);

	return (0);
}
