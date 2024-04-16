#include <stdio.h>
int main(){
	float Matrix[3][3];
	float T_matrix[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the item [%d][%d] : ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&Matrix[i][j]);
		}
	}
		printf("The Matrix is \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%.2f\t",Matrix[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				T_matrix[i][j] = Matrix[j][i];
			}
		}
		printf("The Transpose Matrix is\n");
		for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("%.2f\t",T_matrix[i][j]);
					}
					printf("\n");
				}
	return 0;
}
