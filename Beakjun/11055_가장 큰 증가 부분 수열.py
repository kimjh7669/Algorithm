import sys
N = int(input())
array = list(map(int, input().split(' ')))

allsum = [0] * N
allsum[0] = array[0]
for i in range(1, N):
        for j in range(i):
                if array[i] > array[j]:
                        allsum[i] = max(allsum[i], array[i] + allsum[j])
        if allsum[i] == 0:
                allsum[i] = array[i]
print(max(allsum))
