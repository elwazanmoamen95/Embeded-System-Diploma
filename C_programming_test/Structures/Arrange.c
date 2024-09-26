/*
 * table.c
 *
 *  Created on: 29.04.2024
 *      Author: Mo'men
 */

#include <stdio.h>
#include <string.h>
int main() {
    char names[50][50],tempN[50],FN[50],SN[50],con;
    int BD[50],tempBD,BM[50],tempBM,BY[50],tempBY;
    int count,i,j;
   for(count=0;count<50;count++){
    printf("Enter first name: \n");
    fflush(stdin);fflush(stdout);
    scanf("%s",FN),
    printf("Enter second name: \n");
    fflush(stdin);fflush(stdout);
    scanf("%s",SN),
    printf("Enter birth date(day/month/year): \n");
    fflush(stdin);fflush(stdout);
    scanf("%d %d %d",&BD[count],&BM[count],&BY[count]);
    strcpy(names[count],FN);
    strcat(names[count]," ");
    strcat(names[count],SN);
    printf("Do you wanna continue:[Y/N]\n" );
    fflush(stdin);fflush(stdout);
    scanf("%c",&con);
    if(con=='y'||con=='Y')
    	continue;
    else{
    	count++;
    	break;
    }
   }
    for(i=0;i<count-1;i++){
        for(j=i+1;j<count;j++){
            if((BY[i] > BY[j])||(BY[i] == BY[j] && BM[i] > BM[j])||(BY[i] == BY[j] && BM[i] == BM[j] && BD[i] > BD[j])){
                strcpy(tempN,names[i]);
                tempBY=BY[i];
                tempBM=BM[i];
                tempBD=BD[i];
                strcpy(names[i],names[j]);
                BY[i] = BY[j];
                BM[i] = BM[j];
                BD[i] = BD[j];
                strcpy(names[j],tempN);
                BY[j] = tempBY;
                BM[j] = tempBM;
                BD[j] = tempBD;
            }
        }
    }
    for(i=0;i<count;i++){
        printf("%s\t%d/%d/%d\n",names[i],BD[i],BM[i],BY[i]);
    }
    return 0;
}
