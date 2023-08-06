#include <stdio.h>
int main(){

    int i;
    int arr[3];

    printf("Enter a number : ");

    for(i=0;i<=2;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=2;i++){
        printf("%d \t",arr[i]);
    }

    return 0;

}