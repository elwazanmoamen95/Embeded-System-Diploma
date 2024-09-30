/*
 * Frequency.c
 *
 *  Created on: Apr 15, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main(){
	char s[100],ch;
	int i, count=0;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(s);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	for(i=0;s[i]!=0;i++){
		if(s[i]==ch)
			count++;
	}
	printf("frequency of %c = %d",ch,count);
	return 0;
}

