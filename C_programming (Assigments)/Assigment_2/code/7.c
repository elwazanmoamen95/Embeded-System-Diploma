/*
 * 7.c
 *
 *  Created on: Mar 28, 2024
 *      Author: Mo'men
 */
#include<stdio.h>
int main(){
	int n,factorial=1,i;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n>0){
	for(i=1;i<=n;i++){
		factorial*=i;
	}
	printf("factorial = %d",factorial);
	}
	else if (n<0)
		printf("Error!!! Factorial of negatiive nunmber doesn't exist");
	else
		printf("Factorial of 0 is 1");
	return 0;
}
