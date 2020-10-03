#include <stdio.h>
#include <string.h>
 
int main (void) {
   char string[] = "Baitapso9";
   char tmp;
   int i, j;   
    
   int s = strlen(string);
 
   printf("Chuoi truoc khi sap xep: %s \n", string);
 
   for (i = 0; i < s-1; i++) {
      for (j = i+1; j < s; j++) {
         if (string[i] > string[j]) {
            tmp = string[i];
            string[i] = string[j];
            string[j] = tmp;
         }
      }
   }
    
   printf("\nChuoi sau khi sap xep %s \n", string);
   return 0;
}
