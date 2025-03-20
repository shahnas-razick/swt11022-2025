#include <stdio.h>
int main () {
  int unit;
  printf("Enter the Number of units: ",unit);
  scanf("%d",&unit);

  float rate1= unit*0.50;
  float rate2= rate1*unit*0.75;
  float rate3= rate1*rate2*unit*1.20 ;
  float rate4= rate3*rate2*rate1*unit *1.50;

  if (unit<=50)
  {
      printf("Total electricity bill is: %.2f",rate1);
      scanf("%f",&rate1);
  }
  else if (unit <=100)
  {

      printf("Total electricity bill is: %.2f",rate2);
      scanf("%f",&rate2);
      printf("Bill is: %f",rate1+rate2);
  }
  else if (unit<=200)
  {
      printf("Total electricity bill is: %.2f",rate1+rate2+rate3);
      scanf("%f",&rate3);
      printf("Bill is: %f",rate1+rate2+rate3);
  }
  else if (unit >250)
  {
      printf("Total electricity bill is: %.2f",rate1+rate2+rate3+rate4);
      scanf("%f * %f * %f *%f",&rate1,&rate2,&rate3,&rate4);
  }
return 0;
}
