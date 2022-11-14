#include<stdio.h>
int main(){

    int row=3, col=3;
    int arr[row][col];
    int diagonalSum=0;
    int flag=1,xValue=0;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    if(row==col){
         // diagonal checking........
         for(int i=0; i<row; i++){
             for(int j=0; j<col; j++){
                if(i==j){
                diagonalSum+=arr[i][j];
                }
              }
         }
        xValue=diagonalSum;

        for(int i=0; i<row; i++){
            int x=arr[0][0];
            int rowSum=0,colSum=0;
            for(int j=0; j<col; j++){
                //   row checking...............
            rowSum+=arr[i][j];
                // column checking...........
            colSum+=arr[j][i];
               
            }
            if(xValue!=rowSum&&colSum){
                  flag=0;
            }
        }
        if(flag==1){
                   printf("Yes");
            }else{
                printf("No");
            }
    }
    return 0;
}