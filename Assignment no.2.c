#include <stdio.h>

int main(){

    int a,b,choice;
    printf("Enter the 2 numbers :");
    scanf("%d %d",&a,&b);

    printf("Enter the Arithmatic operation choice for addition=1 , substraction=2, multiplication=3,division=4\n ");
    scanf("%d",&choice);




    switch (choice){

        case 1:
            printf("Addition of two numbers is %d",a+b);
            break;
        

        case 2:
            printf("Substraction of two numbers is %d",a-b);
            break;
        

        case 3:
            printf("multiplication of two numbers is %d",a*b);
            break;
        

        case 4:
            if(b!=0){
                 printf("division of two numbers is %.2f",a/b);
            }
            else{
                 printf("division of two numbers in not possible as b is 0");
            }
            break;
           

        default:
            printf("Entered choice is Invalid");
        


    }



    return 0;
}