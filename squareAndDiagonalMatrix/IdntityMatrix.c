#include<stdio.h>
int main(){
    int row=3, col=3;
    scanf("%d%d",&row,&col);
    int a[row][col], x=1;
    int flag=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }

   if(row==col){
    for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
               if(i==j){
                if(a[i][j]!=1){
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
            printf("Idenity");
        }else{
            printf("Not Idenity\n");
        }
   }else{
    printf("Not Idenity\n");
   }
    return 0;
}