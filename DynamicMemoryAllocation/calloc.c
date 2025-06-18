#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("No.of elements you want to enter : ");
	scanf("%d", &n);

	int *ptr = (int *)calloc(n, sizeof(int));
	printf("Enter the elements : \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", ptr+i);
	}

	printf("You entered elements are : ");
	for(int i=0; i<n; i++)
	{
		printf("%d ", *(ptr+i));
	}
	printf("\n");
}
