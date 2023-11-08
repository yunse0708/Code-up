a, b, c = map(int, input().split())

count = 0

for i in range(a):
    for j in range(b):
        for k in range(c):
            print("%d %d %d" %(i, j, k))
            
            count = count + 1
        
print(count)