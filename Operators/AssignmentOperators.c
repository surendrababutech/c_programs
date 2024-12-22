#include<stdio.h>

int main()
{
	int a, b, opt;
	printf("Enter the value of a : ");
	scanf("%d", &a);
	printf("Enter the value of b : ");
	scanf("%d", &b);

	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Divison\n");
	printf("5. Modulo Divison\n");
	
	printf("Enter an option : ");
	scanf("%d", &opt);

	switch(opt)
	{
		case 1:
			a += b;
			printf("res = %d\n", a);
			break;

		case 2:
			a -= b;
			printf("res = %d\n", a);
			break;

		case 3:
			a *= b;
			printf("res = %d\n", a);
			break;

		case 4:
			a /= b;
			printf("res = %d\n", a);
			break;

		case 5:
			a %= b;
			printf("res = %d\n", a);
			break;

		default:
			printf("Invalid Option\n");
			break;

	}
}
