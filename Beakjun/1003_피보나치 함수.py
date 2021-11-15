import sys
N = int(input())
for i in range(N):
    K = int(input())
    a, b, c = 0, 1, 1
    if K == 0:
        print(1, 0)
        continue
    elif K == 1:
        print(0, 1)
        continue

    for j in range(1, K):
        a = b
        b = c
        c = a + b        
    print(a, b)
    
