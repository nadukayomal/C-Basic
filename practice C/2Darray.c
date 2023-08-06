#include <stdio.h>
int main(){

    int row,colom;
    int arr[3][3]={{11,22,33},{44,55,66},{77,88,99}};

    for (row=0;row<3;row++){

        for (colom=0;colom<3;colom++){
            printf("%d \t",arr[row][colom]);
        }
        printf("\n");
        
    }
    

    return 0;
}