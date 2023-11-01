#include <stdio.h>

char arr[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void f(int n, int k)
{
   if(n/k) f(n/k, k);
   printf("%c", arr[n%k]);
}

int main() {
   int n;
   scanf("%d", &n);
   printf("2 ");
   f(n,2 );
   printf("\n");
   printf("8 ");
   f(n,8 );
   printf("\n");
   printf("16 ");
   f(n,16 );
   return 0;
}
