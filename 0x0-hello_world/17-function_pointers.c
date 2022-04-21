#include<stdio.h>

int Add(int a, int b)
{
	return a+b;
}

int main()
{
	int c;
	//Pointer to a function Add that should take (int, int) 
	//as parameter or argument and retrurn int
	int (*p)(int, int);
	//initialize the function pointer 
	p = &Add;
	//dereference and execute the function
	c = (*p)(2,3);
	printf("%d\n", c);
}

