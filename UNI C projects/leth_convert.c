#include<stdio.h>
int main(){
    float input_lenth;
    float result;

    printf("input Lenth (m):");
    scanf("%f",&input_lenth);
    
    result=input_lenth*100;
    printf("Lenth:%f",result,"cm");
}