/*
 * main.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main(void)
{
	//print largest number (inline case)
	int num1,num2;
	printf("Enter two integer numbers :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("\nthe maximum number is %d",(num1>num2)?num1:num2);
	return 0;
}

