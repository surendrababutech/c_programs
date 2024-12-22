#include<stdio.h>

int main()
{
	int a = 10;

	//Increment Operators
	printf("Pre Increment of %d is %d\n", a, ++a);
	printf("Post Increment of %d is %d\n", a, a++);

	//Decrement Operators
	printf("Pre Decrement of %d is %d\n", a, --a);
	printf("Post Decrement of %d is %d\n", a, a++);

	return 0;
}
