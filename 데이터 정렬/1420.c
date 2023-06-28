#include <stdio.h>
  
int main() 
{
    int n, i, j; //배열의 크기인 n과 반복 및 배열첨자인 i,j
    char name[55][22]; //이름이 들어갈 배열
    int score[55], rank[55]; //각각 점수와 순위가 들어갈 배열 
  
    scanf("%d", &n); //배열 크기, 학생 수 입력
    
    for(i=1; i<=n; i++) //학생 수 만큼 반복해
    {
        scanf("%s", name[i]); //이름과
        scanf("%d", &score[i]); //점수를 입력받고 저장
        rank[i]=1; //순위는 기본이 1이고 
    }
  
    for(i=1; i<=n; i++) //비교를 위한 반복
        for(j=1; j<=n; j++)
            if(score[i] < score[j]) //비교하여 순위를 떨어뜨리는 알고리즘
                rank[i]++; //순위값은 높을 수록 뒷 순위
              
    for(i=1; i<=n; i++) //3번째 순위의 출력을 위한 반복
        if(rank[i]==3) //3번째 순위의 학생을 찾아
            printf("%s", name[i]); //해당 학생의 이름을 출력
      
    return 0; 
}
