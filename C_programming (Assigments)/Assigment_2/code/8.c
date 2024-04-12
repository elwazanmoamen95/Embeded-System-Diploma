/*
 * 8.c
 *
 *  Created on: Mar 28, 2024
 *      Author: Mo'men
 */
#include<stdio.h>
int main(){
	char oper;
	float num1,num2;
	printf("Enetr operator either + or - or * or / : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&oper);
	fflush(stdin);fflush(stdout);
	printf("Enter two operands: ");
	scanf("%f%f",&num1,&num2);
	switch(oper){
	case'+':
			printf("%.1f + %.1f = %.1f",num1,num2,num1+num2);
			break;
	case'-':
			printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);
			break;
	case'*':
			printf("%.1f * %.1f = %.1f",num1,num2,num1*num2);
			break;
	case'/':
			printf("%.1f / %.1f = %.1f",num1,num2,num1/num2);
	}
			return 0;
}

