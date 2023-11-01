#include <stdio.h>

void f(int k){
    if(k <= 0) return;
    f(k - 1);
    printf("*");
}

int main() {
    int n;
    
    scanf("%d", &n);
    f(n);
}

