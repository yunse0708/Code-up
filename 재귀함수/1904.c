a,b=input().split()
a=int(a)
b=int(b)

def odd(a,b):
    if a>b:
        return 0
    elif b%2:
        odd(a,b-1)
        print(b,end=" ")
    elif not b%2:
        odd(a,b-1)
        
odd(a,b)
