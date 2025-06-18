#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("no.of elemnets you want to enter : ");
	scanf("%d", &n);

	int *ptr = (int *)malloc(n * sizeof(int));
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

	return 0;
}
