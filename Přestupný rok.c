Přestupný rok

#include <stdio.h>
int main() {
   int year;
   printf("Zadejte rok: ");
   scanf("%d", &year);

   if (year % 400 == 0) {
      printf("%d je přestupný rok.", year);
   }
      printf("%d není přestupným rokem.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is je přestupný rok.", year);
   }
   else {
      printf("%d není přestupným rokem.", year);
   }

   return 0;
}