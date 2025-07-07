#include<stdio.h>

int main()
{
	int i = 10;
	printf("Address of i(&i) is %p\n", &i);
	printf("Value of i(*&i) is %d\n", *&i);
	return 0;
}
