#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(double *a, double *b) {return *a>*b;}
int main() 
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double M[8] = {a+b, a-b, b-a, a*b, a/b, b/a, pow(a,b), pow(b,a)};

    qsort(M, 8, 8, cmp);  

    printf("%lf", M[7]);
    return 0;
}
