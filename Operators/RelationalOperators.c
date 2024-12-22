#include<stdio.h>

int main()
{
	int a;
	int b;
	printf("Enter value of a : ");
	scanf("%d", &a);
	printf("Enter value of b : ");
	scanf("%d", &b);
	
	if(a == b)
		printf("%d is equal to %d\n", a, b);

	if(a != b)
		printf("%d is not equal to %d\n", a, b);

	if(a < b)
		printf("%d is less than %d\n", a, b);

	if(a > b)
		printf("%d is greater than %d\n", a, b);
	
	if(a <= b)
		printf("%d is less than or equal to %d\n", a, b);

	if(a >= b)
		printf("%d is greate than or equal to %d\n", a, b);
}
