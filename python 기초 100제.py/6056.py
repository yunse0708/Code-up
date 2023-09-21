a, b = map(int, input().split())
print((bool(a) and (not bool(b))) or (not bool(a)) and (bool(b)))
