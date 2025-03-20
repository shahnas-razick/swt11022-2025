#include <stdio.h>
int main () {
   int num;
   do {
    printf("Enter a negative number: ",num);
    scanf("%d",&num);
   }while (num >=0);

    printf("You entered a Negative number: %d",num);
return 0;
}
