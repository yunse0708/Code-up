n1 = input()
n2 = n1[::-1]
password = str(int(n1) + int(n2))
print("YES" if password == password[::-1] else "NO")
