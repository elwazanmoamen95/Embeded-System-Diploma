/*
 * 7.c
 *
 *  Created on: Mar 27, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main(void)
{
	float a=0,b=0;
	printf("Enter vlaue of a = ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter vlaue of b = ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping, value of a = %.2f\nAfter swapping, value of b = %.1f",a,b);
	return 0;
}


