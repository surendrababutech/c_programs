#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num = 100;
	int *ptr = (int*)malloc(sizeof(int));
	*ptr = num;
	printf("%d\n", *ptr);
	free(ptr);
	ptr = NULL;
	return 0;
}
