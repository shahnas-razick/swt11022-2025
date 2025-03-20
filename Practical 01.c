#include<stdio.h>
int main () {
   int age,income;
   printf("Enter your age: ",age);
   scanf("%d",&age);
   printf("Enter your income: ",income);
   scanf("%d",&income);
   if (age >=60 )
        if (income<60000)
        {
       printf("eligible for a tax deduction");
        }
        else
        {
            printf ("Not eligible for tax deduction");
        }
   else
   {
       printf("Not eligible for tax deduction");
   }
   return 0;
}
