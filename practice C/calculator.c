#include<stdio.h>
int main(){

    int num_1,num_2,result;
    char operation;
    // char error="Invalied operation";
    float sum,substrac,devide,multiply,reminder;

    printf("Enter Operation : ");
    scanf("%c",&operation);

    printf("Enter number 1: ");
    scanf("%d",&num_1);

    printf("Enter number 1: ");
    scanf("%d",&num_2);


    if(operation == '+'){
        sum=num_1+num_2;
        result=sum;
    }
    else if (operation == '*'){
        multiply=num_1*num_2;
        result=multiply;
    }
    else if (operation == '/'){
        devide=num_1/num_2;
        result=devide;
    }
    else if (operation == '-'){
        substrac=num_1-num_2;
        result=substrac;
    }
    else if (operation == '%'){
        reminder=num_1%num_2;
        result=reminder;
    }
    else if (operation != '+' && operation != '-' && operation != '*' && operation != '/' && operation != '%' ){
        printf("Invalied operation");
    }

    
    printf("\n%d",result);
    
    // printf("%2c",error);
    return 0;
    
    
    
    
}