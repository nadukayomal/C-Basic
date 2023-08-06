#include<stdio.h>
int main(){
    
    float hourly_pay_rate,workining_hours,OT_pay_rate;
    float normal_salary,OT_hourse,OT_salary,total_salary;

    printf("Enter hourlty pay rate : ");
    scanf("%f",&hourly_pay_rate);
    printf("Hourse of worked : ");
    scanf("%f",&workining_hours);

    OT_pay_rate=hourly_pay_rate*1.5;

    if (workining_hours>=40){

        normal_salary=40*hourly_pay_rate;
        OT_hourse=workining_hours-40;
        OT_salary=OT_hourse*OT_pay_rate;
        total_salary=normal_salary+OT_salary;

    }
    else{

        total_salary=workining_hours*hourly_pay_rate;

    }
        
    printf("Your salary : %f",total_salary);

    return 0;
}