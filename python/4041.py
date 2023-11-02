n = list(map(int, input()))
n.reverse()
print(''.join(str(s) for s in n).lstrip('0'))
print(sum(n))
