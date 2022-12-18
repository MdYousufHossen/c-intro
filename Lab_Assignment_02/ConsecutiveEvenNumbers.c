#include<stdio.h>
int x(int n){
   int ans=n-12;
    ans=ans/4;
    return ans;
}
void main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int X= x(n);
        printf("%d, %d, %d %d\n",X,X+2,X+4,X+6);
    }
   
}