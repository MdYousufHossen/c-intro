#include<stdio.h>
int main(){
									     
int n = 10;
int x = 5;
int index = 0, a[10] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
int b[10];
for (int i=0; i<n; i++) {
	//Write Code Here
    b[i]=(a[i]+5);
} 
for (int j=0; j<n; j++) {
	printf("%d,",b[j]);
} 
return 0;
}