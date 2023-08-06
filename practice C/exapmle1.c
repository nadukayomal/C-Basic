#include<stdio.h>
int main(){
    int age;

    printf("Enter your age :");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("You are a senior citizen");
    }else
    {
        printf("you are a child");
    }
    return 0;
    
    
}