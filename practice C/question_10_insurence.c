#include<stdio.h>
int main(){
    char gender[100];
    char marital_status[100];
    int age;

    printf("Age :");
    scanf("%2d",&age);
    printf("Gender (male/female) :");
    scanf("%s\n",&gender);
    printf("Marital Status (married/unmarried):");
    scanf("\n%s",&marital_status);
    

    if (marital_status=="married"){

        printf("you are insured");

    }else if (marital_status=="unmarried" && gender=="male" && age>30){

       printf("you are insured");

    }else if (marital_status=="unmarried "&& gender=="female" && age>25){

       printf("you are insured");

    }else{

        printf("\nyou are not insured");

    }

    return 0;
    
    
    

}