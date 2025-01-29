#include<stdio.h>

int globalVar = 10;

void function1()
{
	printf("Global Variable in function1 : %d\n", globalVar);
}

void function2()
{
	printf("Global Variable in function2 : %d\n", globalVar);
}

int main()
{
	printf("Global variable in main : %d\n", globalVar);

	function1();
	function2();

	printf("Global variable after function2 : %d\n", globalVar);

	return 0;
}
