/*
 * Power.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Mo'men
 */
#include<stdio.h>

int Power(,);

int main(){
	int num1,num2;
	printf("Enter base nunmber: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num1);
	printf("Enter power nunmber(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num2);
	printf("%d^%d = %d",num1,num2,Power(num1,num2));
	return 0;
}

int Power(int b,int p){
	if(p!=0)
		return (b*Power(b,p-1));
	else
		return 1;
}
