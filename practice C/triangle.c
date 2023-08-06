#include<stdio.h>
int main(){
    float side_1,side_2,side_3;
    int max_lenth,medium_lenth,minimum_lenth;

    printf("Enter lenth 1 :");
    scanf("%f",&side_1);
    printf("Enter lenth 2 :");
    scanf("%f",&side_2);
    printf("Enter lenth 3 :");
    scanf("%f",&side_3);

    if (side_1 == side_2 && side_1 == side_3){

        printf("This is an EquilateralTriangle");
    }
    else if (side_1 == side_2 || side_1 == side_3 || side_2 == side_3){

        printf("Isosceles triangle");
    }
    else {
        // choose max value, medium value,minumum value (1)
        if (side_1>side_2 && side_1>side_3){ 

            max_lenth=side_1;
            if (side_2>side_3){
                medium_lenth=side_2;
                minimum_lenth=side_2;
            }else
            {
                medium_lenth=side_3;
                minimum_lenth=side_2;
            }
            
        }
         // choose max value, medium value,minumum value (2)
        else if (side_2>side_1 && side_2>side_3){

            max_lenth=side_2;
            if (side_1>side_3){
                medium_lenth=side_1;
                minimum_lenth=side_3;
            }else
            {
                medium_lenth=side_3;
                minimum_lenth=side_1;
            }
                
        }
         // choose max value, medium value,minumum value (3)
        else if (side_3>side_2 && side_3>side_1){

            max_lenth=side_3;
            if (side_2>side_1){
                medium_lenth=side_2;
                minimum_lenth=side_1;
            }else 
            {
                medium_lenth=side_1;
                minimum_lenth=side_2;
            }        
        
        }
        // identify right or scalene triangle

        if ((max_lenth*max_lenth) == (medium_lenth*medium_lenth) + (minimum_lenth*minimum_lenth)){

            printf("Right triangle");
        
        }else{
            printf("Scalene triangle");
        }
      
    }

    return 0;
    
}