/*
 * main.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main(void)
{
	//print area or circum by (switch case)
	char character;
	float Radius,Area,Circum;
	printf("Enter the radius of the circle: \n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Radius);
	printf("\na for the area and c for the circum\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);
	switch(character)
	{
	case 'a':
	case 'A':
	{
		Area = 3.14159 * Radius * Radius;
		printf("\nthe area of the circle is %f",Area);
	}
	break;
	case 'c':
	case 'C':
	{
		Circum = 2 * 3.14159 * Radius;
		printf("\nthe circum of the circle is %f",Circum);
	}
	break;
	default:
	{
		printf("\nWrong choice");
	}
	break;
	}
	return 0;
}
