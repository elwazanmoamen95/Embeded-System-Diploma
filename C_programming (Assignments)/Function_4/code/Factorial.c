/*
 * Factorial.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Mo'men
 */
#include<stdio.h>

int Factorial(int n);
int main(){
	int i;
	printf("Enter a positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	printf("Factorial of %d = %d",i,Factorial(i));
	return 0;
}
int Factorial(int n){
	if(n>1)
		return n*Factorial(n-1);
	if(n==0||n==1)
		return 1;
}
