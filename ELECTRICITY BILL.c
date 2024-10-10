#include<stdio.h>
int main(){

    printf(" A PROGRAMM TO CACULATE THE BILL OF ELECTRICITY \n");

    int Customer_ID;
    char Customer_name[1];
    float units_consumed;
    printf("ENTER YOUR ID:  ");
    scanf("%d", &Customer_ID);
    printf("ENTER YOUR NAME:  ");
    scanf("%s", &Customer_name);
    printf("ENTER UNITS CONSUMED:  ");
    scanf("%f", &units_consumed);

    int your_bill;
    int TOTAL_BILL;

    printf("CUSTOMER ID IS:  %d \n", Customer_ID);
    printf("CUSTOMER NAME IS:  %s \n", Customer_name);
    printf("UNITS CONSUMED ARE:  %f \n\n\n", units_consumed);

    printf("UNITS  \t                            CHARGES PER UNIT (Ksh) \n");
    printf("upto 199  \t                                  1.20 \n");
    printf("200 and above but less than 400  \t           1.50 \n");
    printf("400 and sbove but less than 600  \t           1.80\n");
    printf("600 and above        \t                         2.0 \n");
    printf("\n\n");

    if (units_consumed<=199)
    {
        printf("units_consumed * 1.20 is the rate");
        printf("YOUR BILL IS KSH;  %f \n", units_consumed * 1.20);
        scanf("%f", &your_bill);
    }
    else if (200<=units_consumed<400)
{
    printf("units_consumed * 1.50 is the rate");
    printf(" YOUR BILL IS KSH;  %f \n", units_consumed * 1.50);
    scanf("%f", &your_bill);
}
else if (400<=units_consumed<600)
{   
    printf("units_consumed * 1.80 is the rate");
    printf(" YOUR BILL IS KSH;  %f \n", units_consumed * 1.80);
    scanf("%f", &your_bill);

}
else
{   
    printf("units_consumed * 2.0 is the rate");
    printf(" YOUR BILL IS KSH;  %f \n\n", units_consumed * 2.0);
    scanf("%f", &your_bill);

}

    int surcharge = 100.000;

if (your_bill > 400)
{
    printf("TOTAL AMOUNT TO PAY IS KSH:  %f \n", your_bill + surcharge);
    printf("%d\n", surcharge);
    printf("%f\n", your_bill);
    printf("%f\n", your_bill);


}
else
{
    printf("YOUR BILL IS BELOW 400");
}


return 0;

}
