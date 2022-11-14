#include<stdio.h>
int main(){
 int t, n;
 scanf("%d", &n);
    for(int i=0; i<n;i++){
        scanf("%d", &t);
        int flag=0;
        if(t==0||t==1){
            flag=1;
        }
        for(int i=2; i<=t/2; ++i){
        if(t%i==0){
           flag=1;
        }
        }
        if (flag==0)
        {
          printf("Yes\n");
        }else{
            printf("No\n");
        }
        
        
    }


    return 0;
}