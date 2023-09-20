#include <stdio.h>

// 퀵 정렬에서 사용할 파티션 함수
int partition(int list[], int left, int right)
{
    int pivot, temp, low, high;
    low = left;         // 부분 배열의 시작 인덱스
    high = right + 1;   // 부분 배열의 끝 다음 인덱스
    pivot = list[left]; // 피벗은 부분 배열의 첫 번째 원소

    do {
        // 왼쪽에서부터 피벗보다 큰 값을 찾음
        do {
            low++;
        } while (pivot > list[low]);

        // 오른쪽에서부터 피벗보다 작은 값을 찾음
        do {
            high--;
        } while (pivot < list[high]);

        if (low < high) // low와 high가 아직 교차하지 않았을 경우
        {
            // low와 high의 원소를 교환
            temp = list[low];
            list[low] = list[high];
            list[high] = temp;
        }
    } while (low < high);

    // 피벗을 올바른 위치로 이동
    temp = list[high];
    list[high] = list[left];
    list[left] = temp;

    // 피벗의 위치(high)를 반환
    return high;
}

// 퀵 정렬 함수
void quicksort(int list[], int left, int right)
{
    int q;
    if (left < right)
    {
        // 배열을 두 부분으로 분할하고 피벗의 위치(q)를 얻음
        q = partition(list, left, right);

        // 분할된 두 부분을 각각 재귀적으로 정렬
        quicksort(list, left, q - 1);
        quicksort(list, q + 1, right);
    }
    for (int i = 0; i < right; i++)
        printf("%d ", list[i]);
    printf("\n");
}

int main()
{
    int list[] = {5, 3, 8, 4, 9, 1, 6, 2, 7};
    int n;
    n = sizeof(list) / sizeof(int);

    quicksort(list, 0, n - 1); // 퀵 정렬 함수 호출

    // 정렬된 배열을 출력
    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }

    return 0;
}

