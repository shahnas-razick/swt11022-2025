#include <stdio.h>
int main () {
   int firsteven=0;
   for (int i=1; ; i++){
       if (i%2==0){
        firsteven=i;
        break;
       }
   }
   printf("the first even number is: %d",firsteven);

}
