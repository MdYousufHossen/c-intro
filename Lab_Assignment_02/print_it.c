#include<stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x,&y);

    int * ptrX=&x, *ptrY=&y;

    printf("%d %d",*ptrX,*ptrY);

}