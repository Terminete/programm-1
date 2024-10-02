#include<stdio.h>
int main(){
    printf("A PROGRAMM TO CALCULATGE SIMPLE INTREST BY ACCEPTING THE PRINCPAL AMOUNT, TIME AND RATE ");

    int principal, time, rate;
    printf(" ENTER YOUR DESIRED PRINCIPAL AMOUNT:  ");
    scanf("%d", &principal);

    printf("ENTER YOUR DESIRED TIME: ");
scanf("%d", &time);
printf("ENTER YOUR DESIRED RATE: ");
scanf("%d", &rate);
int simple_intrest = (principal*rate*time) /100;
printf("your simple interest is: %d", simple_intrest);


    return 0;

}