/*
 * 5.c
 *
 *  Created on: Mar 28, 2024
 *      Author: Mo'men
 */
#include<stdio.h>
int main(){
	char alpha;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&alpha);
	(alpha>='a'&&alpha<='z'||alpha>='A'&&alpha<='Z')?printf("%c is an alphabet",alpha):printf("%c is not an alphabet",alpha);
	return 0;
}
