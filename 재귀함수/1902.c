num=int(input())

def f(num):
    if num==1:
        print(num)
    else:
        print(num)
        f(num-1)
f(num)
