/*
 * main.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main (void)
{
	//programe print area or circum
	char character;
	float Radius,Area,Circum;
	printf("\r\nEnter a circlr radius: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&Radius);
	printf("\r\na for Area of the circle and c for the Circum ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&character);
	if(character=='a')
	{
		Area = 3.14159 * Radius * Radius;
		printf("\r\ntha Area of the circle is %f",Area);
	}
	else if(character == 'c')
	{
		Circum = 2 * 3.14159 * Radius;
		printf("\r\nthe Circum of the circle is %f",Circum);
	}
	else
	{
		printf("\r\nWrong choice");
	}
	return 0;
}
