#include<stdio.h>

int f(int n){
	if(n==0)
		return 0;
	else 	
		return f(n-1)+n;
}
main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
}
