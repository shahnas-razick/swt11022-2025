#include<stdio.h>
int main () {
   int dayOfWeek = 3;

   switch (dayOfWeek){
    case 1:
        printf("Monday ");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    default:
        printf("Choose another option");
   }
   return 0;


}
