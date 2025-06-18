#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("No.of elements you want to enter : ");
	scanf("%d", &n);

	int* ptr = (int*) malloc (n * sizeof(int));

	printf("Enter the elements : \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", ptr+i);
	}
	for(int i=0; i<n; i++)
	{
		printf("%d ", *(ptr+i));
	}
	printf("\n");
	int m;
	printf("How many more elements you want to enter : ");
	scanf("%d", &m);
	ptr = (int*) realloc(ptr, (n+m)*sizeof(int));
	printf("Enter %d more elements \n", m);
	for(int i=0; i<m; i++)
	{
		scanf("%d", ptr+n+i);
	}
	printf("\n");
	printf("Total Elements : ");
	for(int i=0; i<(n+m); i++)
	{
		printf("%d ", *(ptr+i));
	}
	printf("\n");
	return 0;
}
