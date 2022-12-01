#include<stdio.h>
void main(void)
{
    int row=3, col=3;
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
}