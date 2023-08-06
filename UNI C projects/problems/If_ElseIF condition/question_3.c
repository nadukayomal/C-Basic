#include<stdio.h>
int main(){
    int age;

    printf("Enter your age : ");
    scanf("%d",&age);

    if (age<18){

        printf("Your a child");

    }
    else if (age>=18 && age<=65){

        printf("Your an adult");

    }
    else{

        printf("Your a senior student");

    }

    return 0;
    
    
    
}