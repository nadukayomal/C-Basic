#include<stdio.h>
int main(){
    float tax,tax_rate,price,total_price;
    
    printf("Enter tax rate : ");
    scanf("%f",&tax_rate);

    printf("Enter Price : ");
    scanf("%f",&price);

    tax=price*tax_rate;
    total_price=price+tax;

    printf("Retail price : %f",total_price);
    return 0;

}