/*
 * length.c
 *
 *  Created on: Apr 15, 2024
 *      Author: Mo'men
 */
#include<stdio.h>
int main(){
	int i;
	char s[100];
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(s);
	for (i=0;s[i]!=0;i++);
	printf("Length of string: %d",i);
	return 0;
}

