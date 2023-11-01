n = int(input())
sum = 0

for i in range(1, n+1):
    sum += i
for i in range(n):
    for _ in range(i + 1):
        print(sum, end=' ')
        sum -= 1
    print()
    
    
