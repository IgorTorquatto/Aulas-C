#include <stdio.h>

int main(){
int x=1; float a;
while (x<=10) {
   if (x == 7) {
   printf("Divisão por zero !");
  
 continue;
   }
   a = 1/(x-7);
  
 printf("%f", a);
   x++;

    return 0;
}
