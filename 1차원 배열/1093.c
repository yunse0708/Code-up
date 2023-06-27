#include<stdio.h>

int main()
{
	int n[24]={0,};
	int a, b;
	
	scanf("%d", &a);
	
	for(int i=1; i <= a; i++) //n번 반 
		{
			scanf("%d", &b);
			n[b]++;	
			
		}
		for(int j=1; j <= 23; j++){
				printf("%d ", n[j]);
		}
		return 0;
}
