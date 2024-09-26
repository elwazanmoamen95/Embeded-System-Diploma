// test the output

#include<stdio.h>

int main()
{
	int x = 5;
	int y = 7;
	int* p;
	p = &x;
	printf("x = %d, value pointed by p = %d\n", x, *p);
	*p = 14;
	printf("x = %d, value pointed by p = %d\n", x, *p);
	p = &y;
	printf("x = %d, value pointed by p = %d\n", x, *p);
	*p = 20;
	printf("y = %d, value pointed by p = %d\n", y, *p);
	p = 0;
	
	return 0;
}