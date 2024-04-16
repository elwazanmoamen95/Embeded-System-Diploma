/*
 * Avg.c
 *
 *  Created on: Apr 15, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main(){
	int i,n;
	float num , sum=0 , avg ;
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter number: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&num);
		sum+=num;
	}
	avg = sum / n ;
	printf("Average = %.2f",avg);

	return 0;
}

