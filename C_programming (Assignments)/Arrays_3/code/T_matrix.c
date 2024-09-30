#include <stdio.h>
int main(){
	int i , j , r , c ;
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix:\n");
	fflush(stdin);fflush(stdout);
	int Matrix[r][c] , T_matrix[c][r] ;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&Matrix[i][j]);
		}
	}
		printf("Entered Matrix:\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d\t",Matrix[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<c;i++){
			for(j=0;j<r;j++){
				T_matrix[i][j] = Matrix[j][i];
			}
		}
		printf("Transpose of Matrix:\n");
		for(i=0;i<c;i++){
					for(j=0;j<r;j++){
						printf("%d\t",T_matrix[i][j]);
					}
					printf("\n");
				}
	return 0;
}
