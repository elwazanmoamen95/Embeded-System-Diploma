/*
 * 1.c
 *
 *  Created on: Mar 28, 2024
 *      Author: Mo'men
 */
#include<stdio.h>
int main(){
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	num%2==0?printf("%d is even",num):printf("%d is odd",num);
	return 0;
}


