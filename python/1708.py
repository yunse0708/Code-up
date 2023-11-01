n = int(input())  # 점수의 개수 입력
score = list(map(int, input().split()))  # 점수 리스트 입력
score2 = sorted(score, reverse=True)  # 점수를 내림차순으로 정렬한 리스트

for i in range(len(score)):
    # 각 점수와 해당 점수의 순위 출력
    print(score[i], score2.index(score[i]) + 1)
