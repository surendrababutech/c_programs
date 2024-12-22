#include<stdio.h>

int main()
{
	// Arrays
	int arr[5] = {1,2,3,4,5}; 
	printf("Elements in the Array : ");
	for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// Pointers 
	int num = 10;
	int *ptr;
	ptr = &num;
	printf("Number is %d and the address of Number is %p\n", *ptr, ptr); 

	//Functions
	int add(int a, int b)
	{
		return a+b;
	}
	int a = 10;
	int b = 20;
	printf("Addition of %d and %d is %d\n", a, b, add(a,b));
	
	//structures
	struct student {
		char* name;
		int age;
	};
	struct student s1;
	s1.name = "Surendra";
	s1.age = 24;
	printf("Name : %s and age : %d\n", s1.name, s1.age);	
	
	//Union
	union data {
		int i;
		float f;
		char c;
	};
	union data d1;
	d1.i = 10;
	printf("Integer Data : %d\n", d1.i);


	return 0;
}
