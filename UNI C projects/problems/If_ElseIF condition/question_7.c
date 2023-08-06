#include<stdio.h>
int main(){
    int unit;
    float result,first_50,second_100,third_100,abouve_250;

    printf("Enter total unit :");
    scanf("%d",&unit);

    if (unit<=50){

        result=unit*0.05;

    }
    else if (unit>50 && unit<=150){

        first_50=50*0.05;
        unit=unit-50;
        second_100=unit*0.75;
        result=first_50+second_100;

    }
    else if (unit>150 && unit<=250){

        first_50=50*0.05;
        second_100=unit*0.75;
        unit=unit-150;
        third_100=unit*1.20;
        result=first_50+second_100+third_100;

    }else
    {
        first_50=50*0.05;
        second_100=unit*0.75;
        third_100=unit*1.20;
        unit=unit-250;
        abouve_250=unit*1.50;
        result=first_50+second_100+third_100+abouve_250;
    }
    
    printf("Your payment : %f",result);

    
    
    
}