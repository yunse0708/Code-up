def f(k):
    if(k != 1):
        f(k-1)
    print(k)
k = int(input())
f(k)

