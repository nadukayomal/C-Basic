#include<stdio.h>
int main(){

    float mark_1,mark_2,mark_3;
    float avg;
    
    printf("Enter mark of subject 1 :");
    scanf("%f",&mark_1);
    printf("Enter mark of subject 2 :");
    scanf("%f",&mark_2);
    printf("Enter mark of subject 3 :");
    scanf("%f",&mark_3);

    avg=(mark_1+mark_2+mark_3)/3;

    if (avg>75){
        printf("Congratulation ! ,You are allowed to next class. ");
    }

    return 0;
    
}