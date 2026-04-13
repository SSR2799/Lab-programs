#include <stdio.h>
#include <math.h>

int main(){
    int a,sum=0,i,temp;

    printf("Enter a three digit number");
    scanf("%d",&a);
    if(a >= 100 && a < 1000){

    temp = a;
    for(i=1;i<=3;i++){
        sum = sum + pow(temp%10,3);
        temp=temp/10;
        
    }

    if(sum==a){
        printf("%d is a armstrong",a);
    }
    else{
        printf("Entered number is not a armstrong");
    }



    }

    else{
        printf("Invalid input");
    }


    return 0;
}