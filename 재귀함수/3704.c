#include <stdio.h>

int memo[1000001]={0,1,2,4,7,13,24};

int f(int k) {
    if(memo[k]) return memo[k];
    return memo[k] = (f(k-1)+f(k-2)+f(k-3))%1000;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
