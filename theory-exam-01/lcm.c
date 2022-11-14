#include <stdio.h>

int main() {

    int numOne, numTwo, max;

    printf("Enter two number: ");
    scanf("%d %d", &numOne, &numTwo);
    
    max = (numOne > numTwo) ? numOne : numTwo;

    while (1) {
        if ((max % numOne == 0) && (max % numTwo == 0)) {
            printf("The LCM of %d and %d is %d.", numOne, numTwo, max);
            break;
        }
        ++max;
    }
    return 0;
}