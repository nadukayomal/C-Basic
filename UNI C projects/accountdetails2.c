#include<stdio.h>
int main(){
    int deposite,withdrowel;
    float total,interesrate,Current_amount,sum;

    total=0;
    interesrate=0.5;

    printf("Deposite Ammount : ");
    scanf("%d",&deposite); //Input deposite value

    total=total+deposite;
    sum=total*interesrate;
    total=total+sum;

    printf("Withdrowel Amount :");
    scanf("%d",&withdrowel); // input withdrowel value

    Current_amount=total-withdrowel;

    printf("Available Blance = %f",Current_amount); //print final value

}