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
    for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
               if((i+j)==(row-1)){
                continue;
               }
               if(a[i][j]!=0){
                flag=0;
               }
            }
        }
        if(flag==1){
            printf("Diagonal");
        }else{
            printf("Not Diagonal\n");
        }
   }else{
    printf("Not Diagonal\n");
   }
    return 0;
}