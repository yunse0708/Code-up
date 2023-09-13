#include <stdio.h>
#include <stdlib.h>

int f(int k) {
    if(k<3) return k;
    if(k==3) return 4;
    return f(k-1)+f(k-2)+f(k-3);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d",f(n));
    return 0;
}