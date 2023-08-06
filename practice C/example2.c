#include<stdio.h>
int main(){
    int mark;
    char result;

    printf("Enter your mark :");
    scanf("%d",&mark);

    if (mark>=75){
        result='A'; 
    }
    else if (mark>=55){
        result='B';
    }
    else if (mark>=40){
        result='C';
    }else{
        result='D';
    }

    printf("your have %c pass",result);

    return 0;

    
}