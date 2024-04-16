/*
 * Power.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Mo'men
 */
#include<stdio.h>

void Prime_Numbers(int a,int b);
int i, j, num_1, num_2;

int main(){
	printf("Enetr two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num_1,&num_2); // 10   30
	printf("Prime numbers between %d and %d are: ",num_1,num_2);
	Prime_Numbers(num_1+1, num_2); //11  30

	return 0;
}
void Prime_Numbers(int a,int b){
	for(;a<b;a++){		//j=2
		for(i=2;i<=a/2;i++){  //  2<= 6
			if(a%i==0){
				a++;
				i=2;
			}
		}
		if(a>1&&a<b)
		printf("%d  ",a);
	}
}
