#include <stdio.h>
int main() {
   int input;
   do {
    printf("Enter a Even Number: ");
    scanf("%d",&input);
   } while (input <=0);
   printf("you entered a positive Number : %d",input);
return 0;
}
