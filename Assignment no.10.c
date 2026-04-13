#include <stdio.h>
#include <math.h>

int main(){
    int x,y,choice,i,fact_x=1,fact_y=1;
    printf("Enter the no. x and y : ");
    scanf("%d %d",&x,&y);

    printf("choose the operation to perform\n 1.addition 2.substraction 3.multiplication 4.division 5.power 6.factorial");
    scanf("%d",&choice);


    switch (choice){

        case 1:
        printf("addition of %d and %d is %d",x,y,x+y);
        break;

        case 2:
        printf("substraction of %d and %d is %d",x,y,x-y);
        break;

        case 3:
        printf("multiplication of %d and %d is %d",x,y,x * y);
        break;

        case 4:
        if(y!=0){
            printf("division of %d by %d is %.2f",x,y, (float)x/y);
        }
        else{
            printf(" y cannot be zero");
        }
        break;
        
        case 5:
        printf("power of %d to %d is %.2f",x,y,pow(x,y));
        break;


        case 6:
        for(i=1;i<=x;i++){
            fact_x = fact_x * i;
        }
        for(i=1;i<=y; i++){
            fact_y = fact_y * i;
        }

        printf("Factorial of %d is %d",x,fact_x);

        printf("Factorial of %d is %d",y,fact_y);

        break;


        default:
        printf("Invalid input");

    }

    
    
    
    
    return 0;

}