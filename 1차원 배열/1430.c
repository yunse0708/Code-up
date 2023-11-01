#include <stdio.h>
int arr[10000000] = {0};
int main() {
    int a,i,n;
    scanf("%d", &n);
    for(i = 1; i<=n; i++) {
    scanf("%d", &a);
        arr[a] = 1;
    }
    scanf("%d", &n);
    for(i=1; i <= n; i++) {
        scanf("%d", &a);
        printf("%d ",arr[a]);
    }
  return 0;
}
