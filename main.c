#include<stdio.h>

int main() {
   int x, y;
   for (x = 0; x < 10; x++) {
      printf("\n");
      for (y = 0; y < 10; y++) {
         if (x == 0 || x == 9 || y == 0 || y == 9)
            printf("^");
         else
            printf("-");
      }
   }
   return (0);
}

