#include<stdio.h>
int main(){

    float tempereture;

    printf("Enter temperetute : ");
    scanf("%f",&tempereture);

    if (tempereture>= 80){

        printf("Go play golf");

    }
    else if (tempereture>= 70 && tempereture<=79){

        printf("Go play golf");
        
    }else{

        printf("IT is way too cold");

    }
    return 0;
    
    
}