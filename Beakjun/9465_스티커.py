import sys

N = int(input())
for i in range(N):
        leng = int(input())
        L1 = list(map(int, input().split(' ')))
        L2 = list(map(int, input().split(' ')))
        L1[1] = L1[1] + L2[0]
        L2[1] = L2[1] + L1[0]
        for i in range(2, leng, 1):
                # print(i)
                L1[i] = max(L2[i - 1] + L1[i], L2[i-2] + L1[i])
                L2[i] = max(L1[i - 1] + L2[i], L1[i-2] + L2[i])
                # print(L1[i], L2[i])

        print(max(L1[leng - 1], L2[leng - 1]))
