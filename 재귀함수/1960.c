#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 30001
#define MOD 137

int memo[MAX_SIZE]={1,2,4,};
int f(int k) {
  if (memo[k]) return memo[k];
  return memo[k] = (f(k-1) + k) % 137;
}

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d", f(n));
  return 0;
}
