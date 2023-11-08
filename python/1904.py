def f(a,b):
    if a < b:
        f(a, b-1)
    if b%2==1:
        print(b, end=' ')
a,b=map(int, input().split())
f(a,b)