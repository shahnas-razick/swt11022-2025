#include <stdio.h>
int main(){
   int Age=62;
   int income= 59000;

   if (Age>=60)
       if (income < 60000)
       {
       printf("Eligible for tax deduction");
       }
       else if (income >= 60000)
      {
         printf("not Eligible for deduction");
      }
   else
   {
     printf("Not Eligible for tax deduction");
   }
return 0;

}
