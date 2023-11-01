a = int(input())
n = list(map(int, input().split()))

for i in range(a):
    print(*n,end = ' ')
    n.append(n.pop(0))
    print(end = '\n')
