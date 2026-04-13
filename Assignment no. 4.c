#include <stdio.h>

int main(){
    int BP ;
    float HRA, TA, PT, TS, NS; 
    printf("Enter basic pay of an employee");
    scanf("%d",&BP);

    HRA = 0.1 * BP ;
    TA = 0.05 * BP ;
    TS = BP + TA + HRA ;
    PT = 0.02 * TS;

    NS = TS - PT;

    printf("Net salary payable after deductions and allowances is %.2f",NS);

    return 0;
}