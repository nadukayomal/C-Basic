#include<stdio.h>
int main(){
    int number_1;
    int number_2;
    int result;
    char ch;

    printf("Enter operation :");
    scanf("%c",&ch);

    printf("Enter Number 1 :");
    scanf("%d",&number_1);

    printf("Enter Number 2 :");
    scanf("%d",&number_2);
    
    if (ch=='+'){

        result=number_1+number_2;

    }else if (ch=='-'){

        result=number_1-number_2;

    }else if (ch=='*'){

        result=number_1*number_2;

    }else if (ch=='/'){

        result=number_1/number_2;

    }else{

        result=number_1%number_2;
    };
    
    printf("\n your result:%d",result);

    return 0;
}