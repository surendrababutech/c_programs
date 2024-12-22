#include<stdio.h>
#include<stdbool.h>

int main()
{
	int a, b, opt;
	
	printf("Enter the value of a : ");
	scanf("%d", &a);
	
	printf("Enter the value of b : ");
	scanf("%d", &b);
	
	printf("1. Logical AND\n");
	printf("2. Logical OR\n");
	printf("3. Logical NOT\n");
	
	printf("Enter an Option : ");
	scanf("%d", &opt);

	switch(opt)
	{
		case 1:
			printf("%d && %d is %s\n", a, b, a&&b);

		case 2:
			printf("%d || %d is %s\n", a, b, a||b);

		case 3:
			printf("!%d is %s/\n", a, !a);
	}
}
