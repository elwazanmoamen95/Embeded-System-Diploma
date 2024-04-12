/*
 * 3.c
 *
 *  Created on: Mar 28, 2024
 *      Author: Mo'men
 */
#include<stdio.h>
int main(){
	float num1,num2,num3;
	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num1);
	fflush(stdin);fflush(stdout);
	scanf("%f",&num2);
	fflush(stdin);fflush(stdout);
	scanf("%f",&num3);
	if(num1>=num2&&num1>=num3)
		printf("Largest number = %.2f",num1);
	if(num2>=num1&&num2>=num3)
		printf("Largest number = %.2f",num2);
	else
		printf("Largest number = %.2f",num3);
	return 0;
}

