/*
 * 6.c
 *
 *  Created on: Mar 28, 2024
 *      Author: Mo'men
 */
#include<stdio.h>
int main(){
	int n,sum=0,i;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("sum = %d",sum);
	return 0;
}

