#include<stdio.h>
int main()
{
    int first;
    int second;
    printf("Enter two numbers\n");
    scanf("%i",&first);
    scanf("%i",&second);

    if (first % second == 0){
        printf("The first number is divided by second number.");
    }
    else if(second%first==0) {
        printf("The second number is divisible by the first number. ");

    }else{
        printf("None of them are divisible by the other.");
    }
        return 0;
}