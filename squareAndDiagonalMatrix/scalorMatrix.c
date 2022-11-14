#include<stdio.h>
int main(){
    int row=3, col=3;
    scanf("%d%d",&row,&col);
    int a[row][col];
    int flag=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }

   if(row==col){
    int  x=a[0][0];
    for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
               if(i==j){
                if(a[i][j]!=x){
                    flag=0;
                }
                continue;
               }
               if(a[i][j]!=0){
                flag=0;
               }
            }
        }
        if(flag==1){
            printf("scalor");
        }else{
            printf("Not scalor\n");
        }
   }else{
    printf("Not scalor\n");
   }
    return 0;
}