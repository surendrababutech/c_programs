#include<stdio.h>

int main()
{
	enum week{Mon, Tue, Wed, Thu, Fri, Sat, Sun};

	enum week day;
	day = Sun;
	printf("%d\n", day);

	return 0;
}
