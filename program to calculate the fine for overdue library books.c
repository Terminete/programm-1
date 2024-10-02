#include<stdio.h>
int main()
{
    printf("  A PROGRAMM TO CALCULATE THE FINE FOR OVERDUE LIBRARY BOOKS. \n");
     int Book_id, due_date, return_date;
      printf(" ENTER THE BOOK ID:  \n");
      scanf("%d", &Book_id);
      printf("ENTER THE DUE DATE:  \n");
      scanf("%d", &due_date);
      printf("ENTER THE RETURN DATE:  \n");
      scanf("%d", &return_date);
        printf("\n");
      printf(" DAYS OVERDUE  \t  CHARGES PER DAY \n");
      printf(" Upto 7 Days  \t   ksh 20 \n ");
      printf(" 8 - 14days \t    ksh 50 \n");
      printf(" 15 Days or more  \t ksh 100 \n\n");

    int days_overdue = return_date - due_date;
    printf(" YOUR BOOK ID IS :  %d \n\n", Book_id);
    printf("YOUR RETURN DATE IS:   %d\n\n", return_date);
    printf("YOUR DUE DATE WAS:   %d \n\n", due_date);
    printf("THE DAYS OVERDUE ARE:  %d \n\n", days_overdue);

    if (days_overdue<=7)
    {
        printf("YOUR FINE IS KSH:  %d\n\n" , (days_overdue * 20));
    }
    else if (7<days_overdue<=14)
    {
        printf("YOUR FINE IS KSH:  %d \n\n", (days_overdue * 50));
    }
    else
    {
        printf("YOUR FINE IS KSH:    %d \n\n", (days_overdue * 100));

    }
     
    

    return 0;
}