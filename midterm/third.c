#include<stdio.h>
#include<math.h>
int main(){
    int n=15, temp;
    for(int i=1; i<=15; i++){
        temp=pow(2,i-1);
        printf("%d,",temp);
    }

    return 0;
}