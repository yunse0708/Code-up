#include <stdio.h>

struct device {
    int a,b;
};
struct device d[101];

int main() {
    int n, i, a, b;
    
    scanf("%d", &n);
    for( i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        d[a].a = a;
        d[a].b = b;
    }
    for(i=1; i<=100; i++)
        if(d[i].a) printf("%d %d\n", i, d[i].b);

    return 0;
}