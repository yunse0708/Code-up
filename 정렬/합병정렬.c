#include <stdio.h>

int result[100];  // 전역 변수로 병합된 결과를 저장할 배열

// merge 알고리즘 구현  
// 두 부분 배열을 병합하는 함수
void merge(int list[], int left, int mid, int right)
{
    int i, j, k, l;
    i = left;  // 왼쪽으로 반 나눈 배열, 첫 번째 부분 배열의 시작 인덱스
    j = mid + 1; // 두 번째 부분 배열의 시작 인덱스
    k = left; // 병합된 결과 배열의 시작 인덱스

     // 왼쪽 오른쪽 데이터가 둘 다 남아있을 때  
     // 두 부분 배열 중 하나라도 데이터가 남아 있는 경우 비교하면서 병합
    while(i <= mid && j <= right)
    {
        if(list[i] <= list[j]) 
            result[k++] = list[i++]; 
        else
            result[k++] = list[j++];
    }
    // 첫 번째 부분 배열을 모두 처리한 경우
    if(i > mid) // 왼쪽에는 리스트가 없다
    {
        for(l = j; l <= right; l++)
            result[k++] = list[l];
    }
    // 두 번째 부분 배열을 모두 처리한 경우
    else // 오른쪽에 리스트가 없을 때  
    {
        for(l = i; l <= mid; l++)
            result[k++] = list[l];
    }
    // 병합된 결과를 원래 배열에 복사
    // 원래 자리에 순서대로 넣는다
    for(l = left; l <= right; l++)
        list[l] = result[l];
}

// 병합 정렬을 수행하는 재귀 함수
void mergesort(int list[], int left, int right) {
    int mid;
    if(left < right) // 배열 크기가 1보다 큰 경우 계속 분할
    {
        mid = (left + right) / 2;  // 리스트를 반으로 나눈다(중간 지점 계산)
        mergesort(list, left, mid); // 왼쪽 리스트 정렬(왼쪽 부분 배열을 정렬)
        mergesort(list, mid + 1, right);  // 오른쪽 리스트 정렬 (오른쪽 부분 배열을 정렬)
        merge(list, left, mid, right); // 병합하기 (정렬된 두 부분 배열을 병합)
    }
}

int main()
{
    int list[] = {27, 10, 12, 20, 25, 13, 15, 22};
    int n = sizeof(list) / sizeof(int); // 배열의 크기 계산
    
    mergesort(list, 0, n-1); // 병합 정렬 함수 호출
    
    // 리스트값출력 
    // 정렬된 배열을 출력
    for(int i = 0; i < n; i++) 
        printf("%d ", list[i]);

    return 0;
}



