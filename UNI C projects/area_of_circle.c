#include<stdio.h>
int main(){
    float radius,operation;

    printf("Enter radias :");
    scanf("%f",&radius);
    
    operation=3.14*(radius*radius);

    printf("Area of Circle :%f",operation);
    return 0;
}