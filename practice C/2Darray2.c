#include <stdio.h>
int main(){
    
    int row,colom;
    int arr[3][3];

    printf("Enter a Number :");

    // insert value to array
    for (row=0;row < 3; row++){

        for (colom = 0; colom < 3; colom++){
            scanf("%d",&arr[row][colom]);
        }

    }

    // display valude from array
    for (row=0;row<3;row++){

        for (colom=0;colom<3;colom++){
            printf("%d \t",arr[row][colom]);
        }
        printf("\n");
        
    }

    return 0;

}