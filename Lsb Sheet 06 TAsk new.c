#include<stdio.h>
int main (){
   int unit;
   float rate;

   printf("Enter the Number of units: ",unit);
  scanf("%d",&unit);

  if (unit <=50)
  {
       float rate1=unit*0.50;
      printf("Rate is: %f",rate1);
  }
   else if (unit <=100)
   {
        float rate2=  rate1 + (unit-50)*0.75 ;
        printf("Rate is: %f",rate2);
   }
  else if (unit <=200)
  {
       float rate3= rate2+ (unit-100)*1.20 ;
       printf("Rate is: %f",rate3);
  }
  else if (unit > 250)
  {
      float rate4 = rate3 + (unit-250)*1.50;
       printf("Rate is: %f",rate4);
  }
 return 0;
}


//(unit-50)*0.75 +
