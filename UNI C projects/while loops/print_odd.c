#include<stdio.h>
int main(){
    int n;
    int count=1;

    printf("Enter a number :");
    scanf("%d",&n);

    while(count<=n){

        if(count%2 != 0){
            printf("%d\t",count); 
        }
        count++;
    }
    return 0;
}