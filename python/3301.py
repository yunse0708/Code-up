n = int(input())
cnt = 0
change = [50000, 10000, 5000, 1000, 500, 100, 50, 10]
for i in change:
    cnt += n // i #54520
    n %= i
print(cnt)
