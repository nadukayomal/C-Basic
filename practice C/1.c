#include<stdio.h>
int main(){
    char ch;
    int num;

    printf("Enter number :");
    scanf("%d",&num);

    printf("Enter here :");
    scanf("%C",&ch);
    
    printf("%c",ch);
    printf("%d",num);

}