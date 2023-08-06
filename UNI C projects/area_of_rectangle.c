#include<stdio.h>
int main(){
    float lenth;
    float width;
    float result;

    printf("Enter lenth :");
    scanf("%f",&lenth);
    printf("Enter width :");
    scanf("%f",&width);

    result=lenth*width;
    
    printf("Area of ractangle:%f",result);
}