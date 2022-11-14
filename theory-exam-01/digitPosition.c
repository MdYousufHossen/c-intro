#include<stdio.h>
int main(){
int Number, Count=0;
  printf("Please Enter any number");
  scanf("%d", &Number);
  while(Number > 0)
  {
     Number = Number / 10;
     Count = Count + 1;  
  }

  printf("\n Number of Digits in a Given Number = %d", Count);
    return 0;
}