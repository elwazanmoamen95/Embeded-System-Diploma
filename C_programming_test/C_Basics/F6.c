/*
 * F6.c
 *
 *  Created on: Mar 26, 2024
 *      Author: Mo'men
 */
#include <stdio.h>
int main()
{
	int  n ,x;
	float avg_degree = 0, sum=0;
	printf("Enter the number of students: \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf("the degree of student%d : ",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		sum += x;
	}
	avg_degree = sum / n;
	printf("the average degree is %f",avg_degree);
}

