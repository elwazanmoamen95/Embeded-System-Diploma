/*
 * F7.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
#include <conio.h>
int main(void)
{
	float x,y;
	evaluate_again:

		printf("Enter X value : ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&x);
		y = 5*x*x + 3*x + 2;
		printf("y(%f) = %f",x,y);
		printf("\nDo you wanna evaluate again (y/n)");

	if(getche()=='y');
		goto evaluate_again;
	return 0;
}

