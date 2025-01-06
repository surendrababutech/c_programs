#include<stdio.h>
#include<string.h>

int main()
{
	//String Array
	char str[] = "Hello";

	//print entire stirng
	printf("%s\n", str);

	//To find String Length
	int length = 0;
	length = strlen(str);
	printf("Length of %s is %d\n", str, length);




	//print each char
	for(int i=0; i<length; i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
