#include <stdio.h>

char arr[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void f(int n, int k) {
   if(n/k) f(n/k, k);
   printf("%c", arr[n%k]);
}

int main() {
   int n, k;
   scanf("%d", &n);
   for(int i = 0; i < 10; i++) {
      scanf("%d", &k);
      f(n, k);
      printf(" ");
   }
   
   return 0;
}
