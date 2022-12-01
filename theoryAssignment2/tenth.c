#include<stdio.h>
char * check_grade(int mark){
    if(mark>=0&&mark<=100){
        if(mark>=80&&mark<=100)
            return "A";
        else if(mark>=60&&mark<=79)
            return"B";
        else if(mark>=40&&mark<=59)
            return "C";
        else if(mark>=0&&mark<=39)
            return "F";
    }
    return "Invalid Number";
}
int main(){
    int mark;
    scanf("%d",&mark);
    char * grade= check_grade(mark);
    puts(grade);
    return 0;
}