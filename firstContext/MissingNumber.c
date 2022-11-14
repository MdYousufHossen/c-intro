#include<stdio.h>
int main(){
    int i, t,sum,a,b,c,final;
    scanf("%d",&t);
  for(i=0; i<t; i++){
    scanf("%d %d%d%d",&sum,&a,&b,&c);
    final=sum-(a+b+c);
    printf("%d\n",final);
  }
    return 0;
}