#include<stdio.h>

int main()
{
	int opt, num1, num2;
	printf("1. Bitwise AND\n");
	printf("2. Bitwise OR\n");
	printf("3. Bitwise XOR\n");
	printf("4. Bitwise NOT\n");
	printf("5. Left Shift\n");
	printf("6. Right Shift\n");
	printf("Choose an operation : ");
	scanf("%d", &opt);
	
	if(opt == 4)
	{
		printf("Enter a Number : \n");
		scanf("%d", &num1);
		printf("~%d = %d\n",~num1);
	}

	else {
		printf("Enter first number : ");
		scanf("%d", &num1);
		printf("Enter second number : ");
		scanf("%d", &num2);
	}

	switch(opt)
	{
		case 1:
			printf("%d & %d = %d\n", num1, num2, num1 & num2);
			break;

		case 2:
			printf("%d | %d = %d\n", num1, num2, num1 | num2);
			break;

		case 3:
			printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
			break;

		case 5:
			printf("%d << %d = %d\n", num1, num2, num1 << num2);
			break;

		case 6:
			printf("%d >> %d = %d\n", num1, num2, num1 >> num2);
			break;

		default:
			printf("Invalid Option");


	}
}	
