#include<stdio.h>
void main(void){
    int row, col;
    scanf("%d %d",&row,&col);
    int arrOne[row][col];
    int arrTwo[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arrOne[i][j]);
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arrTwo[i][j]);
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d",arrOne[i][j]+arrTwo[i][j]);
        }
        printf("\n");
    }
}