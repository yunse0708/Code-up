#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for ( i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    sort(arr, arr+n);
    
    for( i=0; i<n; i++) 
        printf("%d\n", arr[i]);
}