#include<stdio.h>

extern int count;

void increment();

int main()
{
	printf("Initial Value of a count : %d\n", count);
	increment();
	printf("Value after increment : %d\n", count);
	return 0;
}
