/*
 * main.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main(void)
{
	//programe print the largest number
	int num1,num2,num3;
	printf("Enter three integer numbers:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1 > num2 && num1 > num3)
	{
		printf("\r\nthe largest number is %d",num1);
	}
	else if(num2 > num1 && num2 > num3)
	{
		printf("\r\nthe largest nuumber is %d",num2);
	}
	else
	{
		printf("\r\nthe largest number is %d",num3);
	}
	return 0;
}

