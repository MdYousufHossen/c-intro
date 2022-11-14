#include<stdio.h>
#include <string.h>
int main(){
// create space for 6 ints and initialize the first 6
int array[10] = {1,2,3,4,5,6,7,8,9};
// reserve space for two lots of 3 contiguous integers
int one[4], two[10]; 
// copy memory of the first 3 ints of array to one
memcpy(one, array, 3 * sizeof(int)); 
// copy 3 ints worth of memory from the 4th item in array onwards
memcpy(two, &array[3], 7 * sizeof(int)); 

for(int i=0; i<3; i++){
    
    printf("%d", two[i]);
}
    return 0;
}