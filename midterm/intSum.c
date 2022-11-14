#include<stdio.h>
int main(){
     int num;
        scanf("%d",&num);
        int sum=0, lastDigit;
            for(int i=0; num!=0; i++){
                lastDigit=num%10;
                sum += lastDigit;
                num=num/10;
            }
         printf("sum ==> %d", sum);
 
    return 0;
}