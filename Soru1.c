#include <stdio.h>

int main() {
   int myArray[100];
   int size, i, j, count;
   
   printf("Kaç Adet Sayı Gireceksiniz:\n");
   scanf("%d", &size);
   
   printf("Sayıları Girin:\n");
   
   for (i = 0; i < size; i++) {
      scanf("%d", &myArray[i]);
   }
   
   printf("Sonuç:\n");
   
   for (i = 0; i < size; i++) {
      count = 1;
      for (j = i+1; j < size; j++) {
         if (myArray[i] == myArray[j]) {
            count++;
            myArray[j] = -1;
         }
      }
      if (myArray[i] != -1) {
         printf("%d --> %d\n", myArray[i], count);
      }
   }
   
   return 0;
}