/*
 * MD.c
 *
 *  Created on: Apr 15, 2024
 *      Author: Mo'men
 */

#include <stdio.h>
int main(){
	float M_1[2][2],M_2[2][2],sum[2][2];
	int i,j;
	printf("Enter the elements of 1st matrix\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&M_1[i][j]);
		}
	}
	printf("Enter the elements of 2st matrix\n");
		fflush(stdin);fflush(stdout);
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("Enter b%d%d: ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&M_2[i][j]);
			}
		}
		printf("sum of matrix : \n");
		for(i=0;i<2;i++){
					for(j=0;j<2;j++){
						sum[i][j] = M_1[i][j]+M_2[i][j];
					}
				}
		for(i=0;i<2;i++){
					for(j=0;j<2;j++){
						printf("%.1f\t",sum[i][j]);
					}
					printf("\n");
				}
		return 0;
}

