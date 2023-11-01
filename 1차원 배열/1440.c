#include <stdio.h>

int main() {
   int n, i, j;
   
   scanf("%d", &n);
   
   int k[n];
   
   for (i = 0; i < n; i++) {
      scanf("%d", &k[i]);
   }
   
   for (i = 0; i < n; i++) {
      printf("%d: ", i + 1);
      
      for (j = 0; j < n; j++) {
         if (i == j) {
            continue;
         }
         
         if (k[i] > k[j]) {
            printf("> ");
         }
         
         else if (k[i] < k[j]) {
            printf("< ");
         }
         
         else if (k[i] == k[j]) {
            printf("= ");
         }
      }
      
      printf("\n");
   }

   return 0;
}



