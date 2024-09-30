/*
 * Insert.c
 *
 *  Created on: Apr 15, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main(){
	int num,insert,location,i;
	printf("Enetr no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	int Array[num];
	for (i=0;i<num;i++){
		fflush(stdin);fflush(stdout);
		scanf("%d",&Array[i]);
	}
	printf("Enetr the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&insert);
	printf("Enetr the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);
	for (i=0;i<num;i++){
		if(i==location-1)
			printf("%d\t",insert);
		printf("%d\t",Array[i]);
	}
	return 0;
}

