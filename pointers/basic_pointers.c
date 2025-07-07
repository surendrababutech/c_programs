#include<stdio.h>

int main()
{
	int x = 10;
	int *p;
	p = &x;
	printf("Value of x(x) is %d\n", x);
	printf("Value of x(*p) is %d\n", *p);
	printf("Address of x(p) is %p\n", p);
	printf("Address of p(&p) is %p\n", &p);

	return 0;
}

