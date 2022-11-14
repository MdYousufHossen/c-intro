#include<stdio.h>
int main(){
int Number, sum=0;
  printf("Please Enter any number");
  scanf("%d", &Number);
  while(Number != 0)
  {
     sum =sum+ Number % 10;
     Number=Number/10;
  }


  printf("\n Number of Digits in a Given Sum = %d", sum);
    return 0;
}