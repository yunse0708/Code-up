#include <stdio.h>

typedef struct STUDENT{
    int no;     //학생 점수
    int inf;    //정보 점수
    int mat;    //수학 점수
    int sum;    //합계 점수
    double avg; //평균 점수
}student;

int main(void)
{
    int n,i;
    
    scanf("%d",&n);
    
    student a[100];
    
    for(i=0; i<n; i++){
        scanf("%d %d %d", &a[i].no, &a[i].inf, &a[i].mat);
        a[i].sum = a[i].inf + a[i].mat;
        a[i].avg = a[i].sum/2.0;
    }
    for(i=0; i<n; i++)
        printf("%d %d %.1f\n",a[i].no, a[i].sum, a[i].avg);
    
    return 0;
}