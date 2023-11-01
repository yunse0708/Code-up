#include <stdio.h>

char arr[] = "0123456789ABCDEF";

void f(int n, int k) {
   if(n/k) f(n/k, k);
   printf("%c", arr[n%k]);
}

int main() {
   int n, k;
   scanf("%d %d", &n, &k);
   f(n, k);
   
   return 0;
}
