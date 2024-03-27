/*
 * 6.c
 *
 *  Created on: Mar 27, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main(void)
{
	float a,b,c;
	printf("Enter vlaue of a = ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter vlaue of b = ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	c=a;a=b;b=c;
	printf("After swapping, value of a = %.2f\nAfter swapping, value of b = %.1f",a,b);
	return 0;
}


