/*
 * 5.c
 *
 *  Created on: Mar 27, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main(void)
{
	char character;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);
	printf("ASCII value of %c = %d",character,character);
	return 0;
}


