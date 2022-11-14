#include <stdio.h>
 int main(){
int inpOne,inpTwo,inpThree,inpFour, small, large;


scanf("%d %d %d %d",&inpOne,&inpTwo,&inpThree,&inpFour );

//largest test........
if (inpOne>inpTwo&&inpOne>inpThree&&inpOne>inpFour){
 printf("leargest= %d\n",inpOne);
}else{
if (inpTwo>inpThree&&inpTwo>inpFour){
 printf("leargest= %d\n",inpTwo);
}else if(inpThree>inpFour){
 printf("leargest= %d\n",inpThree);
}else{
    printf("leargest= %d\n",inpFour);
}
} 

// smallest test.........
if (inpOne<inpTwo&&inpOne<inpThree&&inpOne<inpFour){
 printf("smallest= %d\n",inpOne);
}else{
if (inpTwo<inpThree&&inpTwo<inpFour){
 printf("smallest= %d\n",inpTwo);
}else if(inpThree<inpFour){
 printf("smallest= %d\n",inpThree);
}else{
    printf("smallest= %d\n",inpFour);
}
} 
return 0;
}


