#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int j=0; j<t; j++){
        int counter,n;
        scanf("%d",&n);
        char arr[n+1];
        for(int i=0; i<=n; i++){
            scanf("%c",&arr[i]);
        }
        for(int i=0; i<=n; i++){
            if(arr[i]=='1'&&arr[i+1]=='0')
                counter++;
        else if(arr[i]=='0'&&arr[i+1]=='1')
                counter++;   
        }
        printf("%d\n",counter);
    }
    
    return 0;
}