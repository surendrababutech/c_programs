#include<stdio.h>

void function()
{
	int localVar = 5;
	printf("Local variable indide function : %d\n", localVar);
}

int main()
{
	function();
	//printf("%d", localVar);  It throws an error
	return 0;
}
