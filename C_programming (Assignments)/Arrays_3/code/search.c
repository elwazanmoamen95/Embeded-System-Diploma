/*
 * search.c
 *
 *  Created on: Apr 15, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main(){
	int i,num,search,location=0;
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	int array[num];
	for(i=0;i<num;i++){
		fflush(stdin);fflush(stdout);
		scanf("%d",&array[i]);
	}
	printf("Enter the elements to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&search);
	for(i=0;i<num;i++){
		if(array[i]==search){
			location = i+1;
			printf("Number found at the location = %d",location);
			break;
			}
		}
	if(location==0)
		printf("not found");
	return 0;
}

