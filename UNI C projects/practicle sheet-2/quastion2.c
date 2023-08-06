#include<stdio.h>
int main(){

    int work_hourse_perDay,workDays_perWeek;
    float payment_per_hour,daily_payment,weekly_sallary;

    printf("Payment per hour :");
    scanf("%f",&payment_per_hour); //input payment for an hour

    printf("Working Hourse per day :");
    scanf("%d",&work_hourse_perDay); // input hours for day

    printf("Working days Per week :");
    scanf("%d",&workDays_perWeek); // input working days for week

    daily_payment = payment_per_hour*work_hourse_perDay;
    weekly_sallary = daily_payment*workDays_perWeek;

    printf("your Salary = %f",weekly_sallary); //Output Weekly salary
    return 0;
    
}