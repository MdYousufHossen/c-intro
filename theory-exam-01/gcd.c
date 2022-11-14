#include <stdio.h>
int main()
{
    int numOne, numTwo,gcd;

    printf("Enter two Numbers: ");
    scanf("%d %d", &numOne, &numTwo);

    for(int i=1; i <= numOne && i <= numTwo; ++i)
    {
        // Checks if i is factor of both integers
        if(numOne%i==0 && numTwo%i==0)
            gcd = i;
    }

    printf("The GCD of %d and %d is %d", numOne, numTwo, gcd);

    return 0;
}