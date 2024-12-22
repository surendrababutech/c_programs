#include<stdio.h>
#include<stdlib.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

float divide(int a, int b)
{
	return (float)a/b;
}

int mod(int a, int b)
{
	return a%b;
}

int main()
{
	int opt, a, b;
	while(1)
	{
		printf("Enter a value : ");
		scanf("%d", &a);
		printf("Enter b value : ");
		scanf("%d", &b);
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Modulo\n");
		printf("Enter an option : ");
		scanf("%d", &opt);
		
		switch(opt)
		{
			case 1:
				printf("%d + %d = %d\n", a, b, add(a,b));
				break;

			case 2:
				printf("%d - %d = %d\n", a, b, sub(a, b));
			        break;
			
			case 3:
				printf("%d * %d = %d\n", a, b, mul(a, b));
				break;

			case 4:
				printf("%d / %d = %d\n", a, b, divide(a, b));
				break;

			case 5:
				printf("%d modulo %d = %d\n", a, b, mod(a, b));
				break;

			default:
				printf("Invalid Option\n");
				exit(1);

		}

	}	
}
