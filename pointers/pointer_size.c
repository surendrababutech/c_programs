#include<stdio.h>

int main()
{
	char *ptr1;
	int *ptr2;
	double *ptr3;
	
	printf("Size of character pointer : %zu\n", sizeof(ptr1));
	printf("Size of Integer pointer : %zu\n", sizeof(ptr2));
	printf("Size of Double Pointer : %zu\n", sizeof(ptr3));

	return 0;
}
