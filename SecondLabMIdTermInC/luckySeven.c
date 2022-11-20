#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d\n",&t);
    for(int i=0; i<t; i++){
        char arr[100],temp[100];
        fgets(arr,sizeof(arr),stdin);
       int len=strlen(arr)-1, flag=1;
        for(int j=0; j<len; j++){
           temp[j]=arr[len-1-j];
        }

        for (int j = 0; j < len; j++) {
            if(arr[j]!=temp[j]){
                 flag=0;
                 break;
            }
                    
        }
        if(flag==1){
            if(len>=7){
                printf("Case #%d: %c%d%c\n",t-1-i,arr[0],len-2,arr[len-1]);
            }else{
                printf("Case #%d: ",t-1-i);
                for(int j=0; j<len; j++){
                 printf("%c",arr[j]);
                }
              printf("\n"); 
            }
        }else{
            if((t-1-i)==0){
            printf("Case #1: Not Palindrome\n",);
            }else{
                 printf("Case #%d: Not Palindrome\n",t-1-i);
            }
           
        }
      }

    return 0;
}