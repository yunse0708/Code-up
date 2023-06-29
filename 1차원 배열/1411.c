#include <stdio.h>

int main(){
   
   int n[51]={0};
   int a, b, i, j;
   
   scanf("%d", &a);
   for(i=0; i<a-1; i++){
      scanf("%d", &b);
      n[b]=b;
   }
   
   for(j=1; j<=a; j++){
      if(n[j]!=j){
         printf("%d", j);
         break;
      }
   }
   return 0;
}
