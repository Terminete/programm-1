#include<stdio.h>
int main()
{
    printf("A PROGRAMM TO DETERMINE IF ONE IS ELIGIBLE FOR A LOAN");
    int name, age, annual_income;

    printf("ENTER YOUR AGE:  ");
    scanf("%d", &age);
    printf("ENTER YOUR ANNUAL INCOME:  ");
    scanf("%d", &annual_income);
    
    if (age>=21 && annual_income>=21000)
    {
        printf("CONGRATULATIONS YOU QUALIFY FOR A LOAN!");
    }
    else{
        printf("UNFORTUNATELY, WE ARE UNABLE TO OFFER YOU A LOAN AT THIS TIME!");
    }
    
return 0;
}

