#include<stdio.h>
int main(){
    float deposite=0;
    float Interesrate = 0.01;
    float widtrowel =0;
    float Total;
    float interesrateAmount;
    
    printf("Deposite Balance:");
    scanf("%f",&deposite);
    printf("Withrowel Balance :");
    scanf("%f",&widtrowel);

    interesrateAmount=(deposite-widtrowel)*0.001;
    Total=deposite-widtrowel;
    Total=interesrateAmount+Total;

    printf("Total Ammount :%f",Total);


}