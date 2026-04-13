#include <stdio.h>

int main(){

    int year;
    printf("Enter the year to check :");
    scanf("%d",&year);

    if(year%400==0){
        printf("\n%d is the leap year",year);
    }

    else if(year%400!=0 && year%100!=0 && year%4==0){
        printf("\n%d is the leap year",year);    
    }

    else{
        printf("\n%d is not a leap year",year);    
    }
     

    return 0;

}

