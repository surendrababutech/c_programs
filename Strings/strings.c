#include<stdio.h>
#include<string.h>

int main()
{
	
	//Assigning a String literal without size
	char str1[] = "Surendra Babu";

	//Assingning a string with a predefined size
	char str2[20] = "Surendra Babu";

	//Assigning character by character with size
	char str3[20] = {'S', 'u', 'r', 'e', 'n', 'd', 'r', 'a', ' ', 'B', 'a', 'b', 'u', '\0'};

	//Assigning character by character without size
	char str4[] = {'S', 'u', 'r', 'e', 'n', 'd', 'r', 'a', '\0'};


	printf("String 1 : %s\n", str1);
	printf("Length of %s is %d\n", str1, strlen(str1));
	printf("Size of %s is %d\n", str1, sizeof(str1));

	printf("String 2 : %s\n", str2);
	printf("Size of %s is %d\n", str2, strlen(str2));
	printf("Size of %s is %d\n", str2, sizeof(str2));

	printf("String 3 : %s\n", str3);
	printf("Size of %s is %d\n", str3, strlen(str3));
	printf("Size of %s is %d\n", str3, sizeof(str3));

	printf("String 4 : %s\n", str4);
	printf("Size of %s is %d\n", str4, strlen(str4));
	printf("Size of %s is %d\n", str4, sizeof(str4));

	return 0;
}
