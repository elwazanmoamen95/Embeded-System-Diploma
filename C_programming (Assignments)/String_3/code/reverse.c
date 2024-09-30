/*
 * reverse.c
 *
 *  Created on: Apr 15, 2024
 *      Author: Mo'men
 */
#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	char s[100],temp;
	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(s);
	j=strlen(s)-1;
	for (i=0;i<j;i++){
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		j--;
	}
	printf("Reverse string is : %s",s);
	return 0;
}

