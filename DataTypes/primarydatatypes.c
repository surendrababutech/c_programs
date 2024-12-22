#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

int main()
{

	int dt1 = 10;
	float dt2 = 10.00;
	double dt3 = 560037.9038920809;
	char dt4 = 's';
	bool dt5 = true;

	printf("Integer : %d\n", dt1);
	printf("Float : %f\n", dt2);
	printf("double : %lf\n", dt3);
	printf("char : %c\n", dt4);
	printf("bool : %b\n", dt5);

	//Sizes of basic Data Types
	printf("Size of Integer : %d bytes\n", sizeof(dt1));
	printf("Size of Float : %d bytes\n", sizeof(dt2));
	printf("Size of Double : %d bytes\n", sizeof(dt3));
	printf("Size of Character : %d bytes\n", sizeof(dt4));
	printf("Size of Boolean : %d bytes\n", sizeof(dt5));

	return 0;
}
