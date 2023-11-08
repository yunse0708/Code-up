def f(k):
    if k>1:
        f(k//2)
    print(k%2, end="")
    
k = int(input())
f(k)