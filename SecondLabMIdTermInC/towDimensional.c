#include<stdio.h>
int main(){
    int row, col;
    scanf("%d%d",&row,&col);
    int arr[row+1][col+1];
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            scanf("%d",&arr[i][j]);
        }
    }
 
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(arr[i][j]==i&&arr[i][j]==j){
             arr[i][j]+=3;
            }
            else if(arr[i][j]==i){
             arr[i][j]+=2;
            }
           else if(arr[i][j]==j){
             arr[i][j]+=1;
            }   
        }
      
    }

      for(int i=1; i<=row; i++){
            for(int j=1; j<=col; j++){
                printf("%d ",arr[i][j]);
            }
          printf("\n");
        }
    return 0;
}