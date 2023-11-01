#include <stdio.h>

int main() {
    int n, c, data[301] = {0};  // 배열 크기를 301로 변경하고 초기화 방식을 사용합니다.
    scanf("%d %d", &n, &c);

    for (int i = 0; i < n; i++) {
        int input;
        scanf("%d", &input);
        data[input]++;
    }

    int h = 0;  // 각 줄의 요소 수를 세는 변수를 초기화합니다.
    for (int i = 0; i <= 300; i++) {
        for (int j = 0; j < data[i]; j++) {
            if (i == 300) break;

            printf("%d ", i);
            h++;

            if (h == c) {
                printf("\n");
                h = 0;
            }
        }
    }

    return 0;
}

