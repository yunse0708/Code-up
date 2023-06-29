#include <stdio.h>
    
    int main(){
        char a[100];
        char *p;
        p=a;
        int b,c;
        
        scanf("%s",a); 
        scanf("%d %d", &b, &c);
    
        for(int i=b-1; i<=c-1; i++)
            printf("%c", *(p+i));
        
        
        return 0;
    }