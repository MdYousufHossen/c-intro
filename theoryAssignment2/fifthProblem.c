#include<stdio.h>
int add_three_nums(int a, int b, int c)
#define add_three_nums( a,b, ... ) add_three_nums( a,b, ##__VA_ARGS__, 8 ) 
{

	return a+b+c;
}
int main(void){
int a=10, b=15,result;
result=add_three_nums(a,b);
printf("%i",result);

}