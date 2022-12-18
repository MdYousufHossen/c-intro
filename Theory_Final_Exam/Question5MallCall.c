#include<stdio.h>
#include<stdlib.h>
void main(void){
    int n, i;
    scanf("%d",&n);
    int * ptr;
    ptr= (int*)malloc(n*sizeof(int));
    for(i=1; i<=n; i++){
     *(ptr+i)=i;
    }

    for(i=1; i<=n;i++){
        printf("%d, ", *(ptr+i));
    }
    free(ptr);
}