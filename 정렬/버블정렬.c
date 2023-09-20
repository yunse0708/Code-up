#include <stdio.h>

int main(){
   
   int list[]={5,3,8,1,2,7};
    int n, i, j, temp; 
    n = sizeof(list)/sizeof(int); // 배열의 크기 n, 리스트 크기(4바이트 짜리 6개니까 24)/int 4바이트. 즉 24/4=6
  
     for(i=n-1; i>0; i--)
   {
      for(j=0; j<i; j++)
      {
         if(list[j]>list[j+1]) // 바로 오른쪽에 있는 수랑 비교 
         {
            // 조건이 성립하면 순서 바꿔줌 
            // 앞뒤의 레코드를 비교한 후 교체(교재 457p) 
            temp = list[j];
            list[j] = list[j+1];
            list[j+1] = temp;  
         }
      }
   }
     
     // 리스트 값 출력하기 
   for(i=0; i<n; i++)
        printf("%d ", list[i]);
    
   return 0;
} 
