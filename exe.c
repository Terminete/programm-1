#include<stdio.h>
int main()
{

        printf("A progranm to calculate the simple intrest by accepting PRINCIPAL AMOUNT, TIME AND RATE ! ");

     int principal, rate, time;


    printf("ENTER your desired PRINCIPAL AMOUNT:  ");
    scanf("%d", &principal);
    printf("ENTER your desired RATE:  ");
    scanf("%d", &rate);
    printf("ENTER your desired TIME:  ");
    scanf("%d", &time);

     int simple_intrest = (principal * rate *time)/100 ;

    printf("Your SIMPLE INTREST IS : %d", simple_intrest);

    return 0;
}