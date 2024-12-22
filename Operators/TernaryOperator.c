#include<stdio.h>

int main()
{
	int num1, num2, max;
	printf("Enter the first value : ");
	scanf("%d", &num1);

	printf("Enter the second value : ");
	scanf("%d", &num2);

	max = (num1 > num2) ? num1 : num2;

	printf("%d is maximum value\n", max);

	return 0;
}	
